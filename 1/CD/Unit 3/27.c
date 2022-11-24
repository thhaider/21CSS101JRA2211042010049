
#include <stdio.h>
void increment() 
{
  printf("RA2211042010049\n");
        extern int i;
        i++;
        printf("%d ", i);
}
void decrement() 
{
        extern int i;
        i--;
        printf("%d ", i);
}
void main()
{
        extern int i;
        printf("%d ", i);
        increment( );
        decrement( );
}
int i = 18;
