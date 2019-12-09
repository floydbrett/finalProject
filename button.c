#include <stdio.h>
#include <wiringPi.h>
using namespace std;

//we use the number under wiringPin section instead of physical pin
//This is for GPIO17
#define buttonPin 0

int main(void)
{
   //pinMode (INPUT_PIN, INPUT);
    while(1)
    {
        if(digitalRead(buttonPin) == LOW)
        {
            printf("Button is pressed!\n");
            break;
        }
    }
    
    return 0;
}

//to compile: g++ button.cpp -o button
//./button
