
#include <stdio.h>
#include <string.h>
void main(void) 
{
  printf("RA2211042010049\n");
	char strbuffer[8] = "bbbbbbb";
	char str1[] = "CodeTantra";
	str1[3] = '\0';
	strcpy(strbuffer, str1);
	printf("%s\n",strbuffer);
 }
