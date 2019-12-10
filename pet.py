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


def eating():
  
def sleeping():
      sense.set_pixels(pet_sleep1)
      time.sleep(1)
      sense.set_pixels(pet_sleep2)
      time.sleep(1)
      sense.set_pixels(pet_sleep3)
      time.sleep(1)
      sense.set_pixels(pet_sleep4)
      time.sleep(1)
  
def jumping():
  
def walking():
  
  
pet_sleep1 = [
e, e, e, e, e, e, e, e,
e, g, g, g, e, g, g, g,
g, e, e, e, g, e, e, e,
g, p, p, g, g, g, p, p,
g, g, g, y, y, y, g, g,
g, g, g, g, g, g, g, g,
g, g, g, g, g, g, g, g,
e, e, e, e, e, e, e, e
]

pet_sleep2 = [
e, e, e, e, e, e, e, e,
e, e, e, g, g, g, g, g,
e, e, e, e, e, e, e, g,
e, e, e, e, e, e, g, e,
e, e, e, e, e, g, e, e,
e, e, e, e, g, e, e, e,
e, e, e, g, g, g, g, g,
e, e, e, e, e, e, e, e
]

pet_sleep3 = [
e, e, e, e, e, e, e, e,
e, e, g, g, g, g, g, e,
e, e, e, e, e, e, g, e,
e, e, e, e, e, g, e, e,
e, e, e, e, g, e, e, e,
e, e, e, g, e, e, e, e,
e, e, g, g, g, g, g, e,
e, e, e, e, e, e, e, e
]

pet_sleep4 = [
e, e, e, e, e, e, e, e,
e, g, g, g, g, g, e, e,
e, e, e, e, e, g, e, e,
e, e, e, e, g, e, e, e,
e, e, e, g, e, e, e, e,
e, e, g, e, e, e, e, e,
e, g, g, g, g, g, e, e,
e, e, e, e, e, e, e, e
]
  
