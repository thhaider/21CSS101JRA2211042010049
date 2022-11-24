
#include <stdio.h>
int result(int x) 
{
	if (x % 2)
		return 0;
	else
		return 1;
}
int main()
{
  printf("RA2211042010049\n");
	int x = 3;
	x = result(x);
	x = result(x);
	printf("%d", x);
	return 0;
}
