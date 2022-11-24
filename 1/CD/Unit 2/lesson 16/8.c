
#include <stdio.h>
void main() 
{
	printf("RA2211042010049\n");
  int x = 10, y = 9, *p;
	p = &x;
	y = *p;
	*p = 20;
	printf("%d %d", x, y);
}
