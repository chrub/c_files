#include "stdafx.h"
#include "conio.h"
void print(int * arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("arr[%d] : %d \n", i, arr[i]);
	}
	printf("\n");
}