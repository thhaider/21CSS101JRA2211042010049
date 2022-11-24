
#include <stdio.h>
void main()
{
  printf("RA2211042010049\n");
	char *ptr;
	char myString[] = "ABCDEFG";
	ptr = myString;
	ptr += 5;
	printf("%s", ptr);
}
