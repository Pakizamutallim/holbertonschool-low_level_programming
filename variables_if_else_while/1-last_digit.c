#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	if(y > 5)
	{
		printf("%d and is greater than 5\n", y);
	}
	else if(y == 0)
	{
		printf("%d and is 0\n", y);
	}
	else if(y < 6 && y != 0)
	{
		printf("%d and is less than 6 and not 0\n", y);
	}	
	return (0);
}
