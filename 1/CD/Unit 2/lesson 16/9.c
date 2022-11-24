
#include <stdio.h>
void main()
{
  printf("RA2211042010049\n");
	int x = 15, y = 10, z = 5;
	int *p;
	p = (&x, &y, &z);
	printf("%d", *p);
}
