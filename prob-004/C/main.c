#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool is_palindrome(int x);

int main(int argc, char *argv[])
{	
	int max_palindrome = 0;
	float ratio = 1./CLOCKS_PER_SEC;

	clock_t time_start = clock();

	for(int i = 999; i>99; i--)
	{
		for(int j = 999;j>99;j--)
		{
			if(is_palindrome(i*j)&&(i*j)>max_palindrome)
			{
				max_palindrome = i*j;
			}

		}
	}

	clock_t time_end = clock();

	float time_total = ratio*(long)time_start + ratio*(long)time_end;

	printf("The largest palindrome made from the product of two 3-digit numbers is %d.\n",max_palindrome);
	printf("Program ran for %f seconds.\n",time_total);
	return 0;


/*	int test_number;

	sscanf(argv[1], "%d", &test_number);
	bool result = is_palindrome(test_number);

	printf("Is %d a palindromic number? %s\n",test_number, result ? "True" : "False");

*/	return 0;
}

bool is_palindrome(int x)
{
	int num = x;
	int rev = 0;
	int remainder = 0;

	while(num>0)
	{
		remainder = num%10;
		rev = rev*10 + remainder;
		num = num/10;
	} 

	if(rev==x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

