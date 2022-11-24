
#include <stdio.h>
int bomb();
int p;
int sum = 17;
int main() 
{
  printf("RA2211042010049\n");
	p = bomb();
	printf("%d %d", sum, p);
	return 0;
}
int bomb()
{
	sum++;
	return sum;
}
