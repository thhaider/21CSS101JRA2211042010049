
#include <stdio.h>
void main()
{
  printf("RA2211042010049\n");
	char str[20] = "Tantra";
	char *p = str;
	*p = 'M';
	printf("%s", str);
	return 0;
}
