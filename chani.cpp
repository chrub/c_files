// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "GetVal.h"
#include "print.h"
#include "conio.h"
#include "sort.h"
#include <string>
#include "string.h""
#include "car.h"
#include <stdio.h>

bool exist_in_enum(char *E)
{

	int res;
	res = strcmp(E, "red");
	if (res ==0 )
	{
		int y = 0;
	}
	if (strcmp(E, "blue"))
	{
		int y = 0;
	}
//	switch (*E)
//	{
//	case strcmp(*E,"red"):
//		return true;
//	case 'blue':
//		return true;
//	case 'yellow':
//		return true;
//	default:
//		return false;
//	}
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
//	int arr[10];
//	int * arrpoint1;
//	int * arrpoint2;
//	arrpoint1 = initarr(arr);
//	print(arrpoint1);
//	arrpoint2 = sort(arrpoint1);
//	print(arrpoint2);

	car *carArr = new car[10];
	int speed;
	char color1[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "speed : \n";
		cin >> speed;

		carArr[i].setSpeed(speed);
		do
		{
			cout << "color : \n";
			cin >> color1;
		} while (!exist_in_enum(color1));

		carArr[i].setColor(color(*color1));
	}

	_getch();
	return 0;
}

