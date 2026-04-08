# SmartLock-Sim: 5G-Ready IoT Controller

A modern C++ simulation of a Smart Lock system, designed to demonstrate **Test-Driven Development (TDD)** and **Hardware Abstraction** principles. This project showcases how to develop software for embedded systems where the physical hardware is simulated using **Google Mock**.

---

##  Overview
In large-scale telecommunication and IoT systems (like those at Ericsson), software is often developed before the hardware is even ready. This project solves that problem by using a **Mocking** strategy to ensure the "brain" of the lock (the controller) works perfectly regardless of the physical components.

##  Tech Stack
* **Language:** C++17
* **Testing Framework:** Google Test (gTest) & Google Mock (gMock)
* **Build System:** CMake
* **Design Pattern:** Dependency Injection (DI) & Interface-based Design

---

##  Project Architecture
The project is divided into three logical layers:

1. **Hardware Interface (`IDoorHardware`):** An abstract contract that defines what any door hardware must do (lock/unlock).
2. **Controller Logic (`DoorController`):** The "brain" that validates PIN codes and decides when to trigger the hardware.
3. **Simulation Layer (Mocking):** A virtual door used during testing to verify that the controller sends the correct signals.



---


##  How to Build and Run

### Prerequisites
* **C++17 Compiler** (GCC/MinGW)
* **CMake** 3.10+

### Step-by-Step Build
1. **Configure CMake:**
   ```bash
   cmake -B build

2.  **Build the Project:**
    ```bash
    cmake --build build
    ```

### Running the Tests

Execute the test suite to verify the logic:

```bash
./build/lock_tests.exe
```

-----

##  License

This project is licensed under the **MIT License** - see the [LICENSE](https://www.google.com/search?q=LICENSE) file for details.
