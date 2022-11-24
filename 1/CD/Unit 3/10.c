
#include <stdio.h>
#include <string.h>
void main(void)
{
  printf("RA2211042010049\n");
	char str1[] = "Godavari";
	char str2[20];
	char str3[] = "River";
	int i;
	i = strcmp(strcat(str3, strcpy(str2, str1)), "RiverGodavari");
	printf("%d\n", i);
}
