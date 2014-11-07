/*
Project Euler Problem 001
=========================

Author: Adam Mackie
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc!=2)
	{
		printf("Error: Please provide a single integer argument.\n");
		printf("       Example - 'multiple-sum 1000'\n");
		return -1;
	}

	int limit;
	sscanf(argv[1], "%d", &limit);

	int sum = 0;

	for(int i = 0;i<limit;i++)
	{
		if(i%3==0 || i%5==0)
		{
			sum+=i;
		}
	}

	printf("%d",sum);
	return 0;
}
