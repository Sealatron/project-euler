#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
unsigned int generate_primes(int primes[], int limit);
bool is_prime(int x);
 
int main(int argc, char *argv[])
{
	int number;
	sscanf(argv[1],"%d",&number);

	float ratio = 1./CLOCKS_PER_SEC;

	clock_t time_start = clock();

	int array_size = number/2;
	int *primes = malloc(array_size * sizeof(int));
	double solution = 1;
	unsigned int num_primes = 0;

	num_primes = generate_primes(primes,number);
	
	int i; int j;
	for(i = 0; i < num_primes; i++)
	{
		j = 0;

		while(pow(primes[i],j+1) <= number)
		{
			j++;	
		}

		solution *= pow(primes[i],j);
	}

	clock_t time_end = clock();

	float time_total = ratio * (long)time_start + ratio * (long)time_end;
	
	free(primes); 
	printf("The smallest number divisible by all numbers 1-%d is %f.\n",number,solution);
	printf("Program ran for %f seconds.\n",time_total); 

	return 0;
}
 
unsigned int generate_primes(int primes[], int limit)
{
	unsigned int num_primes = 1; 
	primes[0] = 2;
 
	for(int i = 3; i <= limit; i += 2)
	{
		if(is_prime(i))
		{
			num_primes++;
			primes[num_primes-1] = i;
		}
	}
	return num_primes;
}
 
//Just a quick test to check if a number is a prime number
bool is_prime(int x)
{
	int i = 2;
	while(i * i <= x)
	{
		if(x % i == 0)
		{
			return false;	
		}
		else
		{
			i++;
		}
	} 
	return true;
}
