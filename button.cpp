#include <stdio.h>
#include <wiringPi.h>
using namespace std;

int main(int argc, char** argv)
{
    wiringPiSetup();
    
    //18 for button GPIO24, 22 for GPIO25, 12 for GPIO18
    //This is for GPIO17
    const int INPUT_PIN = 11;
    
    pinMode (INPUT_PIN, INPUT);
    
    while(true)
    {
        if(digitalRead(INPUT_PIN) == HIGH)
        {
            printf("Button is pressed!\n");
            break;
        }
    }
    
    return 0;
}

//to compile: g++ button.cpp -o button
//./button
