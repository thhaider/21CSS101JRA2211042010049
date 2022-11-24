#include <stdio.h>
static int i = 10;
int main() 
{
    printf("RA2211042010049\n");
	i = 5;
	for(i = 0; i < 5; i++) 
	{
		static int a = 10;
		printf("%d ", a++);
	}
	return 0;
}
