#include "stdafx.h"
#include <iostream>
using namespace std;
#include "car.h"
#include "string.h"

car * car :: CarArr(int length)
{
	car *carArr = new car[length];
	int speed;
	char color1 [256];
	for (int i = 0; i < length; i++)
	{
		cout << "speed : \n";
		cin >> speed;
		carArr[i].setSpeed(speed);
		cout << "color : \n";
		gets_s(color1);
		carArr[i].setColor(color(*color1));
	}
	return carArr;
}