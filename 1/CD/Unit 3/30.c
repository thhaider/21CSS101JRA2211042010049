#include <stdio.h>
int fun()
{
 
	static int num = 16;
	return num--;
}
void main() 
{
	for(fun(); fun(); fun()) 
  {
      
		printf("%d ", fun());
	}
	{
	    printf("\nRA2211042010049\n");
	}
}
