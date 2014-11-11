#include <stdio.h>
#include <math.h>
#include <time.h>

int triangular_number(int n);
int pyramidal_number(int n);

int main(int argc, char* argv[])
{
	float ratio = 1./CLOCKS_PER_SEC;

	int number = 100;
	int sum_of_squares, square_of_sum, difference = 0; 

	clock_t time_start = clock();

	square_of_sum = pow(triangular_number(number),2);
	sum_of_squares = pyramidal_number(number);

	difference = square_of_sum - sum_of_squares;

	clock_t time_end = clock();

	float time_total = ratio * (long)time_start + ratio * (long)time_end;

	printf("The difference between the sum of the squares and the square of the sum for the first %d natural number is %d.\n",number,difference);
	printf("Program completed in %f seconds.\n",time_total);

	return 0;
}

int triangular_number(int n)
{
	return (n * (n + 1)) / 2;
}

int pyramidal_number(int n)
{
	return (2 * pow(n,3) + 3 * pow(n,2) + n) / 6;
}
