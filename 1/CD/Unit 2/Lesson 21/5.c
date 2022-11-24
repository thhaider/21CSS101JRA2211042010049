#include <stdio.h>
char* myfunc(char *ptr)
{
  printf("RA2211042010049\n");
	ptr += 4;
	return(ptr);
}
void main() {
	char *x, *y;
	x = "CodeTantra";
	y = myfunc(x);
	printf("%s", y);
}
