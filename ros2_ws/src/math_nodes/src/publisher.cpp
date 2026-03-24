#include <chrono>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

using namespace std::chrono_literals;

class NumberPublisher : public rclcpp::Node {
public:
  NumberPublisher() : Node("number_publisher"), count_(0) {
    // Cria o publicador no tópico "number_topic"
    publisher_ = this->create_publisher<std_msgs::msg::Int32>("number_topic", 10);
    // Cria um timer que roda a cada 1000ms (1 segundo)
    timer_ = this->create_wall_timer(
      1000ms, std::bind(&NumberPublisher::timer_callback, this));
  }

private:
  void timer_callback() {
    auto message = std_msgs::msg::Int32();
    message.data = count_++;
    RCLCPP_INFO(this->get_logger(), "Enviando: '%d'", message.data);
    publisher_->publish(message);
  }
  
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
  int count_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NumberPublisher>());
  rclcpp::shutdown();
  return 0;
}
