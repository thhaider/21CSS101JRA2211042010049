
#include <stdio.h>
extern int x;
void function1()
{
  printf("RA2211042010049\n");
	printf("In function1() the value of x = %d\n", x++);
}
void function2()
{
	printf("In function2() the value of x = %d\n", x++);
}
void main() 
{
	function1();
	printf("In main() the value of x = %d\n", ++x);
	function2();
}
int x = 10;
