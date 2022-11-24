
#include <stdio.h>
void test();
void main() 
{
  printf("RA2211042010049\n");
	int a = 22, b = 44;
	test();
	printf("Values in main() function a = %d and b = %d\n", a, b);
}
void test() {
	int a = 50, b = 80;
	printf("Values in test() function a = %d and b = %d\n", a, b);
}
