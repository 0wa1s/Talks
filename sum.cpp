#include <stdio.h>
#include <string.h>

int sum(int x, int y)
{
	int z;
	z = x+y;
	printf("Argument#1: %d \n", x);
	printf("Argument#2: %d \n", y);
	printf("Sum of arg1 and arg2 is: %d\n", z);
	return z;
}

int main (void) {

    int i= 0;
	int j= 0;
	i = 10;
	j = 15;
    int k = 0;
	k = sum(i, j);
    
    printf("Value returned from sum function: %d", k);
    
	return 0;
}
