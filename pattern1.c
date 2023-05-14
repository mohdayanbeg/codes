#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int x=1;x<=i;x++)
        printf("*");
        printf("\n");
    }
}