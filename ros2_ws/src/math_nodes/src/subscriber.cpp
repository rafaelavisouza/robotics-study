#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

using std::placeholders::_1;

class NumberSubscriber : public rclcpp::Node {
public:
  NumberSubscriber() : Node("number_subscriber") {
    // Inscreve-se no mesmo tópico "number_topic"
    subscription_ = this->create_subscription<std_msgs::msg::Int32>(
      "number_topic", 10, std::bind(&NumberSubscriber::topic_callback, this, _1));
  }

private:
  // Essa função é chamada automaticamente toda vez que um número novo chega
  void topic_callback(const std_msgs::msg::Int32 & msg) const {
    int x = msg.data;
    int y = x * x;
    RCLCPP_INFO(this->get_logger(), "Recebido: %d. O quadrado é: %d", x, y);
  }
  
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr subscription_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NumberSubscriber>());
  rclcpp::shutdown();
  return 0;
}
