#include <stdio.h>

int main() 
{
  printf("RA2211042010049\n");
  
  int time = 24;
  if (time < 12)
  {
    printf("Good morning.");
  } else if (time < 22) 
  {
    printf("Good day.");
  } 
  else 
  {
    printf("Good evening.");
  }
  return 0;
}
