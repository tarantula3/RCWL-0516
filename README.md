# RCWL-0516
All About RCWL-0516 Microwave Radar Motion Sensor

[![AQhBpQrfmg8](https://i.imgur.com/GOuo7Vw.jpg)](https://www.youtube.com/watch?v=JOVd3sKEFaI)


Proximity sensing is a very common application in electronics.
There are several ways to accomplish this. The most common way is by using a PIR sensor. PIR Sensor senses the change in ambient infrared radiation caused by warm bodies. I have already covered this in my Tutorial No. 5: "PIR Sensor Tutorial - With or Without Arduino". However, since PIR sensors detect movement from living objects, they can generate false alarms. These sensors are also inefficient in hot environments, as they rely on heat signatures.

The other common methods of proximity sensing involve, using reflected ultrasonic or light beams. Using these sensors, the intruding object is detected by the reflected beam back to its source. The time delay between transmission and reception is measured to calculate the distance to the object.

In this tutorial, we are going to look at another method of proximity sensing using "Microwaves" and "Doppler Effect".  In my hand is an inexpensive RCWL-0516 Microwave Radar Motion Sensor. The RCWL-0516 microwave sensor detects "any movement" from "any object" and does not rely on heat, making it more reliable in hot environments. I am going to use this sensor to create a Geo-fence around my house to detect motion and get notifications.

Video: https://www.youtube.com/watch?v=JOVd3sKEFaI

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgKNMHm50nciAPdi_5MV1Ku-dMIi5cVYX0Wb1AA3vb9nUK_CdWn9CbrqjR273_2MLLmemVWSxXnhuPLn8J7PXN6Y6DXjVwOXuByEah4AVXH0lpybFAI-fVFfV-ImMNoOQ9PMOtE4E7s17rycqkfFR4lLAudPW8rzzJkXjHofYyTyBpk8DSg76hYISL95x0/w640-h360/7.00.32.17).png)


What is the Doppler effect?
---------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEhjF51Yp6Pnlu9s2vbCgVGe8xXzdz1I1zABqbol4iqNnyXbj-UTXrwHt97ZirPuEiuLmfNM_xcvB0laIv_JMb_lk0g6XUdWwYnIAsMVQO5u2gQyj_v3BI5AbuqhAwjsRSPuZkbqWHCMqomlx6m-JkBTlfYZagKqE6F5pfwz2w0M3MyBmqmpBBR14sDMN50/w640-h360/6.png)

The RCWL-0516 module uses a “Doppler Radar” that makes use of the "Doppler Effect" to detect motion and trigger proximity alerts.
So, before understand how the RCWL-0516 sensor works, let’s understand the Doppler Effect.

The Doppler effect, is named after the Austrian physicist Christian Doppler, who described this phenomenon in 1842. 
He described the change in frequency observed by a stationary observer when the source of the frequency is moving. The sound's pitch is higher than the emitted frequency when the sound source approaches the observer as the sound waves are squeezed into shorter distance (bunched together), which can be heard as a higher pitch. The opposite happens when the object moves away from the observer, causing the sound waves to become lower in frequency and lower in pitch (spread out). As a result, the observer can hear a noticeable drop in the pitch as it passes.

This holds true for all sorts of waves, such as water, light, radio, and sound.


How Does The RCWL-0516 Works?
------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiTZ2FhnZQWrkZib27Vr403x4r6Ha2F4AlK1piYqswR9A2izz2GuowU76nXmpvXJYHpQSorM6wb5b_-qFJLCFcOEVJEQazOiAbH5KzXbYXU1sWCDspQNsZ8vse8oGwu4_bHXWF_X0Ljo_C1AOZEOFTGjdTYQyyJQH6x8bzaNMnDYFy6UAQkeKqWATVU1co/w640-h360/5.png)

Like the PIR Sensors, these sensors also detects only movements within their detection range. But instead of sniffing the blackbody radiation of a moving object, these sensors uses a “Microwave Doppler Radar” technique to detect a moving object.
 
Doppler microwave detection devices transmit a continuous signal of low-energy microwave radiation at a target area and then analyze the reflected signal. The target’s velocity can be measured by analyzing how the target’s motion altered the frequency of the transmitted signal.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEi3uDZZoN9PcxjfBF_VV4diKJabucqgvz4xMi-WCf2SJqZobrumIgEngYyuwO52l9IEn7bsAMmzqqxDEXGgCES6uwQNhE3ExwGHfExaZ6GxMwXInRWDLfEn0sEUug5NYzxrrHW3ctMkvITvc2QVQzdyMUm5ogJoL5tYKPy1Joj8kpjmxGZB3GsVcNNZ2bQ/w640-h360/9.00.36.16).png)

Due to Dopplers effect, the frequency of reflected microwave signal is different from the transmitted signal when an object is moving towards or away from the sensor. When a car approaches a speed trap radar, the frequency of the returned signal is greater than the frequency of the transmitted signal, and when the car moves away, the frequency is lower. This is how a speed gun calculates the speed of the car.


Technical Specifications
------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEidlsq94Yn2YFVs2UosIc4h_eogo4aumQN0fe3fIImlkpLUf2J-bDAhi77OT1RnUXk9Lbi-1Ze2mGOpPsndlM3AiQ-ri9TcnHeVeX9Axg1PVxQ3DNsfaW0K6MoABM6TLB5yIH2kGdeHRKB35eO6BTxn-52SbPEVdf6Lk58ogpHuFWjsmwdEaPr01QTQQiI/w640-h360/12.png)

The technical specifications of this sensor are listed below:

* Operating Voltage:  	4-28V (typically 5V)
* Detection Distance: 	5-7 Meters
* Maximum Current Drawn:	~ 2.7 mA
* Operating Frequency: 	~ 3.18 GHz
* Transmission Power: 	20 mW (typical)/30 mW (max)
* Signal length:    	    ~ 2s
* Regulated Output:   	3.3V, 100mA

 
RCWL-0516 Module Pinouts
------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjaLkAX9bEYmmzQJ6U9tdT4h9uMLzK-NJC_A7vRBBuJgKgBty2w0nyu7SZszmAnnzwqK8oVC8U_7P7vz7fex9_gjVkniV0m7_HP434PytuBTp1MUMCNQvBtNGKla3hp5IeAkfvztQ1jS6oL_FV8GOjPWzNowNoQmgjSNEaXRNrxNGhzlVs8-5VyXvbC0gg/w640-h360/13.png)

The RCWL0516 module is a single breakout board with the following connections:
* 3V3 : it is the "output" from the onboard 3.3V regulator which can be used to power external circuits. Remember, this is not an input pin. This pin can provide up to 100mA of current.
* GND : is the ground pin.
* OUT : is the 3.3V TTL logic output. This pin goes HIGH for 2seconds when a motion is detected and goes LOW when no motion is detected. The output of this module is "analog" and can be connected to an analog input of a microcontroller and sampled by an ADC. The output voltage is roughly proportional to the distance between the sensor and the object. 
* VIN : provides power to the module. Connect this pin to an input voltage anywhere between 4 to 28V (however, 5V is commonly used). This module consumes less than 3mA of current so, you can easily power this by the 5V output from an Arduino or a Raspberry Pi.
****CDS : pins are where you attach an optional LDR (light dependent resistor) allowing it to operate only in the dark.

	You can connect the LDR to the sensor in two ways:
	* By using the two CDS pads on the top of the module.
	* Or by connecting one end of the LDR to the CDS pin at the terminal end, and the other end to the ground.
	We will cover this in the details in the demo section.

Remember, this module comes without any connecting pins attached to it. 

What does CDS stand for? 
CDS stands for Cadmium Sulphide, which is the photoactive component in LDRs. Because of this, LDRs are sometimes called CDS photoresistors.


The RCWL-9196 IC
----------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgttJnCOolYUq1nag-fvNPQ2V7iK9XNywKbRuYak02JMeI0Be4zoESc3psdv2p497k8rnPYmDtL2JJZU4rEk-IesjXLicw7LsUZTeIO3cH9vKuO4yK6gbR0nG5PoqlO3RMmhDze4uDHnM6wJs9VvT84JsPpJvp8HlahVSTI4BhaMyB4LN89sPf_Ephvsng/w640-h360/14.png)

Unlike the PIR sensor, this is an active sensor (Active sensors send out a pulse of energy and detect the changes in the return signal). The module sends out microwaves signals actively at a frequency of about 3.18 GHz and measures the reflected signals. The heart of the module is a doppler radar controller IC "RCWL-9196". This IC is very similar to the BISS0001 IC found in the PIR sensors.
The chip also supports "repeat triggers" and has a "360-degree detection area without blind spots".

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEivfeGO2XVQrjav7-twbzkBlx2PfGsbcIYkOMwfBdjNVoGtCw7lN27LywjdCIALtNJJaYD1ydxOeinkRLsXL2Uqv_JBUVwmiDItNGg4v6q7hpJTH3F6y5VgeDMSdJYDtlCXbF5SUam3e7ENkVAEZ0jk5zvs48hOZa0MrMoLxw5xeJnVOX-tGeH6PbG69BQ/w640-h360/15.png)


Microwave Antenna and RF Power Amplifier
----------------------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjXEbEQ0_avqtnHqFRqWySBEHszsEZHpecx-BpAx1iF2m-pglMr3gFr_Cbi8bZYtbEIGQOcABkQ8IRL01OX9cN2CoyxRWQM1Kktwq2EoxnGyxa0Sv3kC4whwoqpGm6MtUXK6sDwb3LAKApK0rozp00S3kOSb-L4If9ArSQ7DlMq0WpPhJ5OeQBiLgWhijo/w640-h360/17.png)

The MMBR941M RF amplifier is a high-speed NPN transistor "Q1" that takes low-power RF signal and boosts it to a higher power level. The antenna is integrated on the PCB. It has a detection range of approximately "7 Meters" while only consuming less than "3mA of current". When triggered, the output (OUT) pin will switches from LOW (0V) to HIGH (3.3V) for 2 to 3 seconds before returning to its idle (LOW) state.

The transistor Q1 also acts as a mixer that combines the transmitted and received signal and outputs the difference which is filtered by the low pass filter formed by C9 and R8, and is amplified by the IC.


Jumper Settings
---------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgFBEhg4HIBT1AJq8RT-PlLgBsm24tXPQP9FPphb_RHAZ_FvxtZHPntS8RL7JazBkPfmngBFEafbTO7au73VKpqKbvj_OuyZ-8t4DBMvnVUT77Z0UZUKlk2BNcSfYZCuAnGOQIylmomSqo272RBnLVpH9OFlRHkkLLaRx1yn4m10bAFo3mLxxAajpgjdHM/w640-h360/18.png)

The module has 3 jumper settings at the back of it. The sensors default settings can be altered, by populating these jumpers with appropriate resistors and capacitors:

* C-TM  : (Pulse length Adjustment) By installing a suitable SMD capacitor you can adjust the repeat trigger time by extending the output pulse length. Default trigger time is 2s. Increasing capacitor's capacity will make repeat trigger time longer. A 0.2µF capacitor extends the output pulse to 50s, while 1µF extends it to 250s.
* R-GN  : (Detection Range Adjustment) By installing a suitable resistor you can reduce the detection range. The default detection range is 7m. If you install a 1M resistor the distance reduces to 5m, while a 270K resistor reduces it to 1.5m.
* R-CDS : (Light Sensitivity Adjustment) You can use this as an alternative to soldering the LDR. Any resistor between 47K – 100K will suffice. The lower the value, the brighter the light must be in order to disable the trigger.


Demo
----
Demo 1: Basic Setup
-------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgM_Cb-ZE1UeJvpT6ch61xWpeEbOOarciK8RoRbcVD_9kqNRX8noDzqXAYume0YXpkxWpvUuCEgD64Oq4vgGvGnp_3z-ZM2ohB2RxyTNGHYpwzu6uzmLTOASb3LQI0TGhpwex4xkd8iVNy16rzzm-OLsnjVlyt3ukPe9KFowCoVDnJKwAJjrmJe5a8zRNY/w640-h360/19.png)

This sensor is capable of working on its own even without a microcontroller. In my first example I am going to show you guys how useful it is on its own. 

The wiring is very simple, you just need to connect the sensor's VIN and GND to a power supply between 4-28V. Then connect a LED to the OUT pin via a 220Ω current limiting resistor. That’s it, as easy as that.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEi8d-znE_7M2XuO5xhiTXzt8JncHnxyHBrUYzj4qIoNm44riTLWtAHBuJWq3o47CGKqAnLo8eJpcqtW7TuOCpwYgB1-nv-6w8TwmncPok8nyqM3f7WA_9b0hEYj18UwlR4GlqHgLlpOsIvCv4MJA97LRRymE5PdBkgYmxpRd5zo7QUeJg5EzQqnEslISDg/s320/20.png)

Now, when the module senses motion, the red LED lights up for about two seconds when the OUT pin of the sensor goes “HIGH”. You can replace the LED with a relay module if you want to turn something ON/OFF based on motion.
 
Demo 2: Connecting an LDR
-------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiNw2nmOC5JoILC-9xjqIbJ7zgy7LMidb2no0cgZljoV0zE-S8fjyPvZHCTqHTo94G-yP0el789VL3aCAhYw4_B3hvHuIvSqzYK78ybkztt-BMvemdKrEUWtYhM7QtIjNUyo6OruVCyFUNfdFfxsxx3uyfFy309iZ_bciVWjlTlULeYUu6qL6G2Ye2AWys/w640-h360/21.png)

The setup is exactly same as the previous one with an addition of an LDR.
As discussed earlier, you can either connect the LDR to the two CDS pads on the top of the sensor, or attach one leg of the LDR to the CDS pin at the bottom of the module and the other one to GND. LDRs don't have polarity, so they can be connected in any direction of your choice.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgWZKLJkFXEGSyr0ZdPfb0jwLXqdXQet_yKLTFDXgDkXDDld4RGaMYtZm3pxqzVHXMSGAKvoKs5isAVXTUJbt5YdjDJsToQqsd9ozscnoL21P1gATzixKODEYJYEAr4HJIXQ2UceKluVIneVT1KLfUidD5OG4OrdFVMfF9lT8-NUGS_Oo4wsjIP1ufNMhI/s320/22.png)

When the LDR is exposed to light the resistance of the LDR decreases, and you will notice that the sensor produces no output. However, the sensor resumes normal operation once the room is darkened.

This property of the sensor can be used in spotting intruders at night or controlling lights in a room.

Demo 3: Connecting an Arduino
-----------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgG4XjhqKioHs23jMt8FNLZ7vcFCnLfDj2tzb6NbOVAmPHxgWtD1t1L-YosRW6g2qc5Rb8knaRy2odwr5Q_LBno1lInXDw1c504cM2CGISwq17zCixwa5KtJ8pOGarT0K4I7N3c7oaBMeWA36OZO6EtFnAPn1OWPcTVgcShx8fQsS4Hfhcpn73g4Oo-MjE/w640-h360/23.png)

While this module works well on its own, it also works well as a sensor when hooked up to a microcontroller or a microcomputer.
In this example, I am going to light up an LED using an Arduino when the sensor senses a motion.

![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgtygNUdqg4-traL1pWKdh86HrouYE3T6CnW4cQyYohSiKfFmY59hPvRXHDfWr-o5_HJJdARtSRyXbwTag5nyEy-QQd7hymNBbSjT2nxxHDLEGC5UZQC17_X-yWBwpZnkz2BSj_fW7ObsmcRY3BBk9e3L_0vh-naVB18DsCwpN8JpHrnlWUwMAAxDNwIMY/s320/24.png)

Power the sensor from the 5v pin of the Arduino and connect the OUT pin to pin 2 of the Arduino.
Now, connect an LED to pin no 3 of the Arduino via a 220Ω current limiting resistor.
Upload the code and swipe your hand over the sensor. The red LED lights up and the serial monitor displays the message "Motion Detected" when the sensor detects a motion.

Demo 4: Sending Motion Alerts Over RF or WiFi
---------------------------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEg-FjPqziBObn_xwwSW8hq8HGqp62wI7bZQQ5tAt_cbfZxUmnRNC6z3NklkmSl9On5SbVpfR8UlQRGlyIT0hZQIuIGOWTovLieYJa5IkrOEeUK6o-NGsUR6bsEFbr4UQr1y_fMcTNv_cWswuWPsHkNDGHwDnr-BUW5Y3jfgcSeubRj1wel37qu-5nwdFuQ/w640-h360/25.png)

You can do all sorts of funky stuff using this sensor.
You can attach this module to a nodeMCU or a NRF20L01 transceiver module or to a 433MHz RF transmitter/receiver module to send the detected motion information as a notification to a mobile device or save it in a database.


Advantage and Disadvantages
---------------------------
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgq3eNv6L4tIynX-LT41sprA9t7ZxryLjSsNUfJChrK0dtTelPs9yosRGoUGQMUqF7wQjH3i9SwNspn_Njf4Ub-tXrdrg-vBUEdTqWulpJ1JRTXGQd4yg_8AKtsEdlw1E3HrcKZmdC8s-qnn3EGd8OWvPb6U7zQUzMabKa6X6RY_nAWMUSJN7W0PJwLvlA/w640-h360/26.png)

Advantages
----------
* Very cheap and compact. The PCB itself is less than 4mm thick
* They can penetrate through walls and holes allowing them to have a wide detection range
* Radar signals can penetrate non-conductive materials such as plastic and wood allowing them to be hidden or protected from accidental damage
* These sensors can work perfectly behind 18mm thick pieces of pine wood, 50mm thick hardback book with no obvious reduction in sensitivity
* These sensors are safe. They put out very low levels of microwaves at 3.2GHz
* They are not effected by heat much and have better detection rate than traditional IR sensors
* They are incredibly sensitive to movement and can detect small movements very easily

Disadvantages
-------------
* Since these sensors rely on a Doppler radar system, signal reflections from other nearby objects can interfere with the measurement, making it less reliable and accurate than other sensors
* These sensor and all its leads needs to be rigidly mounted. If the connecting leads are subject to movement or vibration, they will trigger the sensor
* These sensors don't work behind normal standard double glazing panels
* The reflections from metals can also influence the measurements
* They can be triggered by the wind
* You can use Aluminum foils to block the microwave signals from the sensor
 

Uses
----
![image](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgazmwDNAryocEEgHo-WIooAc9Bj6HjJsOcX5CHJP9Ybq2_OoR-bZ92xscbH-f0NEhoi1vxMeJueCJEa5GzWfkPQpwrrjnBSqy9otXx9k0I1QOXjOwpYXkhUqX_Q0PrJMzGXOOml6o170O0Dloq3o5uS9N8uV8XbqLA4WM0Mz-ni3F3myhLzT8ThixLAsg/w640-h360/27.png)

Burglar alarm
Intruder detection
Smart security devices
Human sensing toys
Geofencing 
Halloween props
Sensing people/animals through walls even without light
Security and motion sensing light switches


Thanks
------

[![AQhBpQrfmg8](https://i.imgur.com/GOuo7Vw.jpg)](https://www.youtube.com/watch?v=JOVd3sKEFaI)


Thanks again for checking my post. I hope it helps you.
If you want to support me subscribe to my YouTube Channel: https://www.youtube.com/user/tarantula3



Video: Visit https://youtu.be/JOVd3sKEFaI

Full Blog Post: Visit

Code: Download https://github.com/tarantula3/RCWL-0516/blob/main/Code.ino

Datasheet: https://github.com/tarantula3/RCWL-0516/blob/main/rcwl-0516-data-sheet.pdf

Schema: https://github.com/tarantula3/RCWL-0516/blob/main/rcwl-0516-schematic.png




**Other Links:**

PIR Sensor Tutorial - With or Without Arduino: Video https://youtu.be/jvGOtvnPU9Q

DIY Relay Module: https://www.youtube.com/watch?v=3n69b4sdDjk

All About nRF24L01 Modules: https://www.youtube.com/watch?v=LhBIRMMAGGE

DIY - NodeMCU Development Board: https://www.youtube.com/watch?v=y2m2nh7wHaY

Contactless Wireless Door Bell Using Arduino: https://www.youtube.com/watch?v=DF6Xojd7OvA

Doppler Effect: Wikipedia https://en.wikipedia.org/wiki/Doppler_effect



**Support My Work:**

BTC:   1Hrr83W2zu2hmDcmYqZMhgPQ71oLj5b7v5

LTC:   LPh69qxUqaHKYuFPJVJsNQjpBHWK7hZ9TZ

DOGE:  DEU2Wz3TK95119HMNZv2kpU7PkWbGNs9K3

ETH:   0xD64fb51C74E0206cB6702aB922C765c68B97dCD4

BAT:   0x9D9E77cA360b53cD89cc01dC37A5314C0113FFc3

LBC:   bZ8ANEJFsd2MNFfpoxBhtFNPboh7PmD7M2

COS:   bnb136ns6lfw4zs5hg4n85vdthaad7hq5m4gtkgf23 Memo: 572187879

BNB:   0xD64fb51C74E0206cB6702aB922C765c68B97dCD4

MATIC: 0xD64fb51C74E0206cB6702aB922C765c68B97dCD4


Thanks, ca again in my next tutorial.
