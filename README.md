# HelpingHand
![logo](https://github.com/lasnab/helping-hand/blob/master/logo.png?raw=true)
HelpingHand, so called because of its ability to have similar dexterity to a human hand, this is a Bluetooth controlled robotic arm, an upgrade on my previous project, the Hand Mimic. The robot is controlled by an Android Smartphone via an application. The actual arm used is taken from the Hand Mimic, and has been mounted on a self-designed, custom fabricated, sheet metal chassis, affixed with motors for motion. 

![video] (https://vimeo.com/314112126)
> A video showing the arm being used to remotely pick-up an object

![image](https://github.com/lasnab/helping-hand/blob/master/images/view.png?raw=true)

The application face for controlling the mobile rover. Not having any prior experience in developing mobile applications, I took help of MIT AppInventor to make the app itself. Since this is a prototype, I decided to keep the app as simple as possible, focusing on the functionality than anything else.

![image](https://github.com/lasnab/helping-hand/blob/master/images/bottom.jpg?raw=true)
> An overview of the custom chassis and mounting of the arm itself.

The chassis is made of 18 Gauge sheet metal. It was completely designed and fabricated by me. The special feature about this chassis is that it has a self-contained battery compartment in the base. In order to maximize the payload carrying ability, a 12mm thick wood ply was mounted on top of the chassis using 14mm bolts and nuts. This gave a multi-purpose, sturdy platform which could be later used to house a computer and a Kinect sensor for on-board video processing and complete autonomous function.

![image](https://github.com/lasnab/helping-hand/blob/master/images/bottom2.jpg?raw=true)
> An overview of the drivetrain.

For the drivetrain, high-torque geared DC motors were used due to their ability to pull heavy loads yet low costs. Four motors were used in total, with two each on either side being wired in parallel.

![image](https://github.com/lasnab/helping-hand/blob/master/images/top.jpg?raw=true)
> An overview of the control electronics

The control circuitry was kept simple, with the L298 Motor Driver being used for controlling the four drive motors and the Arduino Motor Shield being used for controlling the arm. Though not visible, the heart of operations is an ArduinoUNO microcontroller, hidden under the motor shield, working in conjunction with the HC-05 Bluetooth Module to receive and compute the signals from the smartphone.

![image](https://github.com/lasnab/helping-hand/blob/master/images/side.jpg?raw=true)
> An inside look at the inbuilt battery compartment.

The integrated battery compartment has been built to house a standard 12V 2.1Ah Lead Acid Battery. Since weight was not a concern when designing this robot, I chose to use a Lead Acid over any other battery technology (Li-Ion, Li-Poly, NiMh) due to its high capacity and low cost.

![image](https://github.com/lasnab/helping-hand/blob/master/images/clp1.jpg?raw=true)
> A closer view of the self-made Motor-to-Arm Coupling

Due to the unusual shape of the motor shaft, I had to improvise for mounting the arm itself to the motor. For this, instead of using standard motor coupling methods (which would likely fail due to the weight of the arm), I instead widened out one end of the aluminium tube by cutting half-way through it, and then securing it using a nut and a bolt. This ensured minimal play in the joint while being rigid at the same time.

![image](https://github.com/lasnab/helping-hand/blob/master/images/clp2.jpg?raw=true)
> The 'wrist' was mated to the claw using a proprietary motor coupler


![video] (https://vimeo.com/314112096)
