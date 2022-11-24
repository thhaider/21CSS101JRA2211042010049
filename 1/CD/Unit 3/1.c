
#include <stdio.h>
void main() 
{
  printf("RA2211042010049\n");
	char p[] = "%d\n";
	p[1] = 'c';
	printf(p, 66);
}
