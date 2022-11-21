#include <stdio.h>
int main()
{
  printf("RA2211042010049\n");
  int count, i;
  float weight, height;
  
  count = 0;
  printf("Enter the weight and height for 5 boys\n");
  
  for(i=1; i<=5; i++)
    {
    scanf("%f %f", &weight, &height);
    if (weight<50 && height>170)
    count = count + 1;
    }
    
    printf("Number of boys with weight < 50kg\n");
    printf("and height > 170 cm = %d\n", count);
}
