
#include <stdio.h>
void main() 
{
  printf("RA2211042010049\n");
 	int *ptr, a = 10;
	ptr = &a;
	*ptr = *ptr + 1;
	printf("%d %d", *ptr, a);
}
