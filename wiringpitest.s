#include <wiringPi.h>
#include <iostream>
using namespace std;

int main()
{
	wiringPiSetup();
	const int FEEDING_PIN = 17;
	pinMode(FEEDING_PIN, INPUT);
	
	if(wiringPiSetup()<0){
		cout<<"setup wiring pi failed"<<endl;
		return 1;
	}
	
    while(true)
    {
        // As soon as we detect an input, log and quit.
        if(digitalRead(FEEDING_PIN) == HIGH)
		{
			cout << "Button is pressed!\n";	
			break;
		}
    }
	return 0;

}
