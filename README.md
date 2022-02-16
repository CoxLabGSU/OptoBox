# OptoBox
Code for controlling the Optobox, a high-throughput optogenetic stimulation device for neuroscience research. This code consists of Arduino sketch(es) for controlling an Arduino Uno component of the Optobox, with appropriate circuit and wiring diagram available upon request or in future published works.

The current implementation of "OptoBox5secOn5minOff.ino" is written to simultaneously pass 5V through 3 digital out channels (3,5,6) of the Arduino, causing 3 groups of LED lights to come on for 5 seconds. This process repeats every 5 minutes indefinitely. Users can alter illumination parameters by changing the duration values (in milliseconds) for each channel.

Developed by Kevin J. Donaldson, MS in the lab of Dr. Daniel Cox, Neuroscience Institute, Georgia State University, 2022
