# Solar Panel Project
This project was originally created in July 2022. However, I have since learned much more in my EE and CS curriculum, and I wish to implement what I have learned
- In the original creation, I could follow the light every 2 minutes, and rather crudely. I intend to fix this to be smooth and constant
# To do:
1. Make Arduino work
   - Wire breadboard with PV sensors to read in light amount
   - Design housing using SolidWorks and then 3d print for Arduino and pv sensors

# Goals
1. Follow the sun (duh)
   - [ ] Stepper vs servo motors for pitch vs yaw
   - [ ] wire together and make sure the prototype works
   - [ ] Finally, make sure the prototype was working identically or better than the original attempt
2. Environmental Optimization
   - [ ] Maximize Solar Energy Capture: Improve solar panel alignment and tracking for optimal energy intake.
3. Fault Detection
   - [x] Real-time Fault Detection: Implement algorithms to detect and alert users to system faults.
4. Data Analysis
   - [ ] Collect and Analyze Performance Data: Gather and analyze data to optimize system efficiency.
   - [ ] Data Visualization: Provide tools for visualizing trends and insights.
5. User-Friendly Interface
   - [ ] Accessible Controls: Simplify user interaction with the system.
6. Integration and Communication
    - [x] Hybrid System (Raspberry Pi + Arduino): Use a combined setup for hardware control and data processing.
    - [x] Seamless Communication: Ensure reliable data exchange between components.

# Proof:
8/8/2024 - Prototype with two working solar cells implemented
- Each sensor is wired to common power input and ground as well as wired to their own voltage divider circuits to have a relative comparison to read from the photo resistor

<img src="https://github.com/user-attachments/assets/73f7f326-c8b0-420e-9000-744e345c970b" width="50%" height="50%">


