#include <stdio.h>
#include <stdbool.h>

bool is_palindromic(int a);
bool palindromic_comparison(int a, int b);

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("It appears you entered the wrong number of arguments!\n");
		printf("Please pass one - and ONLY one - number to this program.\n");
		return -1;
	}
	int number;
	sscanf(argv[1], "%d", &number);


	if(is_palindromic(number))
	{
		printf("Good news! %d is a palindromic number.\n",number);
	}
	else
	{
		printf("I'm sorry, %d is NOT a palindromic number. :(\n",number);
	}

	return 0;
}

bool palindromic_comparison(int a, int *b)
{
	if (a < 0) return false;
	if (a ==0) return true;

	if(palindromic_comparison(a/10,b) && (a%10 == b%10))
	{
		b /= 10;
		return true;
	}
	else
	{
		return false;
	}
}

bool is_palindromic(int a)
{
	return palindromic_comparison(a,a);
}
