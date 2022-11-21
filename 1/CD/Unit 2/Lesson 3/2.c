#include <stdio.h>
void main() 
{
	printf("RA2211042010049\n");
	char ch;
	printf("Enter a character : ");
	ch = getchar();
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		printf("Given character %c is an alphabet\n", ch);
	}
	if (ch >= '0' && ch <= '9') 
	{
		printf("Given character %c is a digit\n", ch);
	}
}
