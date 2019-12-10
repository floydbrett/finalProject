#import gpio library and button
import RPi.GPIO as GPIO
from gpiozero import Button

#assign buttons to gpio pins
button1 = Button(17)
button2 = Button(5)
button3 = Button(16)
button4 = Button(6)
button5 = Button(18)

#import the sense hat library and time library
from sense_hat import SenseHat
import time
from time import sleep
sense = SenseHat()

g = (0, 210, 90) #green
y = (255, 230, 0) #yellow
e = (0, 0, 0) #empty
p = (251, 176, 179) #pink
r = (240, 0, 0) #red
b = (0, 240, 240) #blue
