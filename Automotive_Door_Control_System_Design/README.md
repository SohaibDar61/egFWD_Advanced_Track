# egFWD_Automotive_Door_Control_System_Project

## Hardware requirements:

Two microcontrollers connected via CAN bus
One Door sensor (D)
One Light switch (L)
One Speed sensor (S)
ECU 1 connected to D, S, and L, all input devices
Two lights, right (RL) and left (LL)
One buzzer (B)
ECU 2 connected to RL, LL, and B, all output devices
Software requirements:

ECU 1 will send status messages periodically to ECU 2 through the CAN protocol
Status messages will be sent using Basic Communication Module (BCM)
Door state message will be sent every 10ms to ECU 2
Light switch state message will be sent every 20ms to ECU 2
Speed state message will be sent every 5ms to ECU 2
Each ECU will have an OS and application SW components
If the door is opened while the car is moving → Buzzer ON, Lights OFF
If the door is opened while the car is stopped → Buzzer OFF, Lights ON
If the door is closed while the lights were ON → Lights are OFF after 3 seconds
If the car is moving and the light switch is pressed → Buzzer OFF, Lights ON
If the car is stopped and the light switch is pressed → Buzzer ON, Lights ON
You should draw and deliver the system schematic (Block Diagram) according to your requirements understanding, a screenshot is required

## Static design analysis

For ECU 1:

Make the layered architecture
Specify ECU components and modules
Provide full detailed APIs for each module as well as a detailed description for the used typedefs
Prepare your folder structure according to the previous points
For ECU 2:

Make the layered architecture
Specify ECU components and modules
Provide full detailed APIs for each module as well as a detailed description for the used typedefs
Prepare your folder structure according to the previous points
You should deliver a pdf file containing all your work and a video recording where you will discuss your work (maximum 3min long)

## Provide Fully Dynamic design

CRITERIA
MEETS SPECIFICATIONS
Dynamic design analysis

For ECU 1:

Draw a state machine diagram for each ECU component
Draw a state machine diagram for the ECU operation
Draw the sequence diagram for the ECU
Calculate CPU load for the ECU
For ECU 2:

Draw a state machine diagram for each ECU component
Draw a state machine diagram for the ECU operation
Draw the sequence diagram for the ECU
Calculate CPU load for the ECU
Calculate bus load in your system: With what percentage of system bus was busy per 1 second
