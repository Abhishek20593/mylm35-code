# mylm35-code

* A temperature sensor LM35 is interface with the Arduino. For this―
1. Arduino Uno R3
2. LM 35 Centigrade Temperature Precision Sensor
3. A Breadboard
4. Some Female to Male Connecting Wire
5. A Computer and
6. A USB A-to-B cable
― are needed.

* A. The three female to male connectors are connected with the Temperature Sensor
* B. Then the temperature sensor is connected to the Arduino Uno
Connect the +Vs to +5v on the Arduino board. Connect Vout to Analog0 or A0 on the Arduino board. Connect GND with GND on the Arduino.
* C. After that the Sketch of temperature sensor will uploaded to the Arduino Board. 
     The Analog to Digital Converter (ADC) has a precision of 10 bits, so converts analog values into a digital approximation based 
     on the formula ADC_Value = (Analog_value /1024) X 500 . Use this formula to convert the digital value to a standard value.
* D. After everything is done, compile the code and upload it to the board. Then start the Serial monitor to view the output values.

# ----------------THANK YOU------------------
