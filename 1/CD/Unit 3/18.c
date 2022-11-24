
#include <stdio.h>
void swap(int, int);
int main() 
{
  printf("RA2211042010049\n");
	int a = 10, b = 15;
	swap(a, b);
	printf("%d %d", a, b);
	return 0;
}
void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
