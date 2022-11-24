
#include <stdio.h>
int sample(int x) 
{
	x++;
	return x;
}
int main() 
{
  printf("RA2211042010049\n");
	int x = 15;
	x = sample(x = sample(x = sample(x)));
	printf("Result = %d\n", x);
	return 0;
}
