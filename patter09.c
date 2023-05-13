#include <stdio.h>
void main()
{
    int i,j,n,l=0,h,a[20][20],t;
    printf("Enter a number : ");
    scanf("%d",&n);
    t=n;
    h=2*n-2;
    while(n>0)
    {
        for(i=l;i<=h;i++)
        {
            for(j=l;j<=h;j++)
            {
                if(i==l || i==h || j==l || j==h)
                    a[i][j]=n;
            }
        }
    
    n--;
    l++;
    h--;
    }
    for(i=0;i<=2*t-2;i++)
    {
        for(j=0;j<=2*t-2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}