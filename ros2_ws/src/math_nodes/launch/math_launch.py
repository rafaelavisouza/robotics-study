from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Inicia o nó do Publicador
        Node(
            package='math_nodes',
            executable='publisher',
            name='meu_publicador_automatico'
        ),
        # Inicia o nó do Assinante
        Node(
            package='math_nodes',
            executable='subscriber',
            name='meu_assinante_automatico'
        )
    ])
