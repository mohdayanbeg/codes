#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
        {
            for(j=1;j<=3-i;j++)
            printf(" ");
            for(j=1;j<=2*i-1;j++)
            printf("*");
        }
        else
        {
            for(j=1;j<=i-3;j++)
            printf(" ");
            for(j=1;j<=11-2*i;j++)
            printf("*");
        }
        printf("\n");
    }
}