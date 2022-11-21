#include<stdio.h>
int main()
{
  printf("RA2211042010049\n");
  int n, sum=0;
  printf("Enter n value: ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
    
  {
    if(i%2!=0) sum += i;
  }
  
  printf("Sum of odd numbers from 1 to %d is: %d", n, sum);
  return 0; 
}
