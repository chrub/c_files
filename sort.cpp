#include "stdafx.h"
#include <iostream>
using namespace std;

int * sort(int *arr)
{
	int temp;
	bool flag = true;
	for (int i = 0; i < 10 && flag; i++)
	{
		flag = false;
		for (int j = i; j < 10; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				flag = true;
			}
		}
	}
	return arr;
}