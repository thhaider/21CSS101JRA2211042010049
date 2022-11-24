
#include <stdio.h>
#include <string.h>
void main(void) 
{
  printf("RA2211042010049\n");
	char str1[10] = "Hello";
	char str2[10] = "Students";
	int i;
	strcat(str1,str2);
	i = strlen(str1);
	printf("%s%d", str1, i);
}
