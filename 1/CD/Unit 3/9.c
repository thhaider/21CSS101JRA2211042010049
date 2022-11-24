
#include <stdio.h>
#include <string.h>
void main(void)
{
  printf("RA2211042010049\n");
	char str1[20] = "Hello", str2[20] = " World";
	printf("%s", strcpy(str2, strcat(str1, str2)));
}
