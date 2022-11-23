#include<stdio.h>
int main()
{
    printf("RA2211042010049\n");
int i;
for(i=0; i<10; i++)
{
if(i==4)
{
break;
}
printf("%d\n\n", i);
}


int j;
for(j=0; j<=11; j++)
{
    if(j==6)
    {
        continue;
    }
printf("%d\n", j);
}


int k;
while(k<13)
{
    if(k==7)
    {
        break;
    }
printf("%d\n\n", k);
k++;
}


int l=0;
while(l<16)
{
    if(l==6)
    {
        l++;
        continue;
    }
printf("%d\n", l);
l++;
}
return 0;
}
