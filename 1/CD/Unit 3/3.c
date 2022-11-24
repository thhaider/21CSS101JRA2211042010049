
#include <stdio.h>
void main() 
{
  printf("RA2211042010049\n");
	char a[] = "\0";
	if (printf("%s", a))
	printf("The string is empty\n");
	else
	printf("The string is not empty\n");
}
