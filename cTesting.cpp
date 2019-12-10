#include <stdio.h>
#include <wiringPi.h>
//#include "/usr/include/python3.7/Python.h"
#include <python3.7/Python.h>
//#include "/usr/lib/python3.7"
//#include <Python.h>
//#include "stdafx.h"
#include <iostream>

// GPIO17 = 0, GPIO18 = 1, GPIO6 = 22, GPIO5 = 21, GPIO16 = 27
int main(int argc, char** argv) //int _tmain(int argc, TCHAR* argv)
{
	int x = 0;
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
	
	Py_Initialize();
	PyObject *pName, *pModule, *pDict, *pFunc, *pArgs, *pValue;
	pName = PyString_FromString("space-pet");
	pModule = PyImport_Import(pName);
	pDict = PyModule_GetDict(pModule);
	int s = 1;
	
	while (s)
	{
		if(digitalRead(button1) == LOW)
		{
			printf("Button1 is pressed!\n");
			x = 1;
			pFunc = PyDict_GetItemString(pDict,"eating");
			s = 0;
		}
			
		if(digitalRead(button2) == LOW)
		{
			printf("Button2 is pressed!\n");
			x = 2;
			s = 0;
		}
			
		if(digitalRead(button3) == LOW)
		{
			printf("Button3 is pressed!\n");
			x = 3;
			s = 0;
		}
			
		if(digitalRead(button4) == LOW)
		{
			printf("Button4 is pressed!\n");
			x = 4;
			s = 0;
		}
			
		if(digitalRead(button5) == LOW)
		{
			printf("Button5 is pressed!\n");
			x = 5;
			s = 0;
		}
	}
	//Py_Finalize();
	
	return 0;
}
