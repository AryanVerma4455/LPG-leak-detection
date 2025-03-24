# LPG-leak-detection

DESCRIPTION 
The system detect the lpg around if it concentration is high it trigger the buzzer and red led
if the concentration of gas is low or negelcgible it turned on green led.

THE COMPONENTS:
1. Arduino uno R3
2. red led
3. green led
4. buzzer
5. 1k ohm resistance×2
6. jumper wire male to male
7. breadboard
8. 5v battery
9. MQ-06

WORKING 
When the gas concentration increase the mq sensor change resistance 
if it greater then threshold value it digital write the buzzer using tone
and digital write the red led and if there gas value smaller then threshold value
it digital write the green led to high.

FOR CODE
Open the Gas_detection.ino file.
