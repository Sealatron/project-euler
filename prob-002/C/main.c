/*
Project Euler Problem 002
=========================

Author: Adam Mackie
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc!=2)
	{
		printf("Error: Please provide a single integer argument.\n");
		printf("       Example - 'even-fibonacci-sum 1000'\n");
		return -1;
	}

	int limit;
	sscanf(argv[1], "%d", &limit);

	int sum = 0;

	int prev = 1;
	int next = 0;
	int curr = 2;

	while(curr<=limit)
	{
		if(curr%2==0)
		{
			sum+=curr;
		}
		
		next = prev + curr;
		prev = curr;
		curr = next;
	}

	printf("%d",sum);
	return 0;
}
