
#include <stdio.h>
void main() 
{
  printf("RA2211042010049\n");
	extern int a;
	static char j = 'E';
	printf("%c %d", ++j, ++a);
}
int a = 10;
