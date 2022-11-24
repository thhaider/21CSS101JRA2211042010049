#include <stdio.h>
int sum(int a, int b) 
{
	static int total = 0;
	total = total + a + b;
	return total;
}
void main() 
{
    printf("RA2211042010049\n");
	printf("%d ", sum(10, 20));
	printf("%d ", sum(30, 40));
}
