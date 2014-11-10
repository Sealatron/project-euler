#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

		//int number = 13195;
		//long number = 600851475143;
		long number;
		sscanf(argv[1], "%ld", &number);

		long remainder = number;
		int test_factor = 2;
		long largest_factor = 0;

		while(test_factor*test_factor <= remainder)
		{
			if(remainder%test_factor == 0)
			{
				remainder = remainder/test_factor;
				largest_factor = test_factor;
			}
			else
			{
				test_factor++;
			}
		} 

		if (remainder > largest_factor)
		{
			largest_factor = remainder;
		}

	printf("The largest prime factor of %ld is %ld!\n",number,largest_factor);

	return 0;

}
