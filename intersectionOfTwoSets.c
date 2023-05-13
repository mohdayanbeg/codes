#include<stdio.h>
void main()
{
    int a[20],b[20],n[20],i,j,k=0,n1,n2;
    printf("Enter the number of elements in set A : ");
    scanf("%d",&n1);
    printf("Enter the elements in set A : ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in set B : ");
    scanf("%d",&n2);
    printf("Enter the elements in set B : ");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
            n[k]=a[i];
            k++;
            }
        }
    }
    printf("Intersection of sets is : ");
    for(i=0;i<k;i++)
    {
        printf("%d ",n[i]);
    }
}