#include <stdio.h>
int fun(int n) 
{
   
	static int s = 0;
	s = s + n;
	return s;
}
int main() 
{
	int i = 10, x;
	while (i > 0) 
	{
		x = fun(i);
		i--;
	}
	printf ("%d ", x);
	printf("\nRA2211042010049\n");
	return 0;
}
