
#include <stdio.h>
int i;
int fun1(int);
int fun2(int);
void main() 
{
    printf("RA2211042010049\n");
    int i = 3;
    fun1(i);
    printf("%d ", i);
    fun2(i);
    printf("%d ", i);
}
int fun1(int j) {
    printf("%d ", ++j);
    return 0;
}
int fun2(int i)
{
    printf("%d ", ++i);
    return 0;
}
