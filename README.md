# 🤖 Robotics Study: Sim-to-Real & High-Performance Navigation

![ROS 2](https://img.shields.io/badge/ROS_2-Humble%2FJazzy-blue?logo=ros)
![C++](https://img.shields.io/badge/C++-17%2F20-00599C?logo=c%2B%2B)
![Python](https://img.shields.io/badge/Python-3.10+-3776AB?logo=python)
![Docker](https://img.shields.io/badge/Docker-Containerized-2496ED?logo=docker)

## 📌 Overview
This repository documents my study and development environment in **Autonomous Mobile Robotics**, with a special focus on the **Sim-to-Real** (Simulation-to-Reality transfer) strategy and **High-Performance Computing**. 

The main goal of this project is to bridge algorithmic optimization techniques with the modern robotics stack, creating a reproducible pipeline for massive simulation, navigation algorithm benchmarking, and data analysis. This repository serves as a technical foundation for future academic research, open-source contributions in robotics ecosystems (focused on hardware and C++), and advanced competitions.

## 🏗️ Architecture & Technologies

The tech stack was chosen for maximum reproducibility and computational efficiency:

* **Infrastructure:** Linux (Ubuntu), Docker (ROS environment containerization).
* **Middleware:** ROS 2 (Robot Operating System 2).
* **Simulation:** Gazebo (with Headless execution support for benchmarking).
* **Algorithms & Control:** C++ (for core search algorithms and Nav2 plugins).
* **Automation & Analysis:** Python, Bash, Pandas, Matplotlib.

---

## 🚀 Project Phases & Implementations

Development is structured in the following incremental phases:

### 1. Scientific Infrastructure & Reproducibility 🐳
Ensuring the simulation environment can run identically on any machine.
- [X] Creation of an optimized `Dockerfile` with the ROS 2 base image.
- [ ] Shell scripts for setup automation and log directory creation (`run_experiment.sh`).
- [ ] Implementation of basic communication nodes (Publisher/Subscriber) for environment validation.

### 2. Headless Simulation & Benchmarking 📊
Running robot physics without a graphical interface, maximizing CPU/Memory usage for at-scale testing.
- [ ] TurtleBot3 configuration in the Gazebo simulator.
- [ ] Python scripts to reset and automate sequential test scenarios.
- [ ] Automated collection of hardware metrics (RAM/CPU) during execution using `psutil`/`htop`.

### 3. Algorithmic Optimization (C++ Path Planning) 🧠
Developing the navigation "brain" focused on low time complexity.
- [ ] Native implementation of the **A* (A-Star)** search algorithm in modern C++.
- [ ] Integration of the C++ algorithm with the ROS 2 ecosystem via Topics.
- [ ] Initial map processing (Grids/Occupancy) using OpenCV.

### 4. Nav2 (Navigation 2 Stack) Integration 🧭
Replacing default ROS planners with custom high-performance solutions.
- [ ] Basic autonomous navigation using the standard Nav2 stack + RViz.
- [ ] (Advanced) Creation of a **Custom Global Planner Plugin** in C++ for Nav2.

### 5. Data Analysis & Scientific Results 📉
Processing simulation logs for statistical performance evaluation.
- [ ] Log file processing using the Pandas library.
- [ ] Generation of performance charts (Resource Usage vs. Time) with Matplotlib/Seaborn.

---
