#include <stdio.h>
#include <wiringPi.h>

// GPIO17 = 0, GPIO18 = 1, GPIO6 = 22, GPIO5 = 21, GPIO16 = 27
int main(int argc, char** argv)
{

	wiringPiSetup();

	const int button1 = 0;
	const int button2 = 1;
	const int button3 = 22;
	const int button4 = 21;
	const int button5 = 27;
	
	pinMode(button1, INPUT); //red button
	pinMode(button2, INPUT); //bottom tiny button
	pinMode(button3, INPUT); //yellow button
	pinMode(button4, INPUT); //big black button
	pinMode(button5, INPUT); //top tiny button
	
	while (true)
	{
		if(digitalRead(button1) == LOW)
			printf("Button1 is pressed!\n");
		
		if(digitalRead(button2) == LOW)
			printf("Button2 is pressed!\n");
			
		if(digitalRead(button3) == LOW)
			printf("Button3 is pressed!\n");
			
		if(digitalRead(button4) == LOW)
			printf("Button4 is pressed!\n");
			
		if(digitalRead(button5) == LOW)
			printf("Button5 is pressed!\n");
	}
	
	return 0;
}
