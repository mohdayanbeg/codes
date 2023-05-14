#include<stdio.h>
void main()
{
    int a[50],i,j,min,pos,t,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Entered array is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
    }
    printf("\nSorted array is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}