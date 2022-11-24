
#include <stdio.h>
int test(int i)
{
	return(i++);
}
void main() 
{
  printf("RA2211042010049\n");
	int i = test(10);
	printf("%d", --i);
}
