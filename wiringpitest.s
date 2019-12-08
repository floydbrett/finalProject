#include <wiringPi.h>
#include <iostream>

int main()
{
	wiringPiSetup();
	const int FEEDING_PIN = 17;
	pinMode(FEEDING_PIN, INPUT);
	
    while(true)
    {
        // As soon as we detect an input, log and quit.
        if(digitalRead(FEEDING_PIN) == HIGH)
		{
			std::cout << ("Button is pressed!\n");	
			break;
		}
    }
	return 0;

}