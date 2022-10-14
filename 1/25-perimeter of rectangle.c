#include <stdio.h>
int main() 

{
    
    printf("RA2211042010049\n");
    float length,breadth,perimeter;
    printf("Enter the length and breadth:");
    scanf("%f %f", &length,&breadth);
    perimeter=2*length+2*breadth;
    printf("The perimeter is %f",perimeter);
    return 0;
}
