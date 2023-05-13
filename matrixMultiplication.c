#include<stdio.h>
void main()
{
int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,q;
printf("enter the order of First matrix");
scanf("%d%d",&m,&n);
printf("enter the order of Second matrix");
scanf("%d%d",&p,&q);
if(n!=p)
{ printf("Multiplication Not possible");
}
else
{
printf("enter First matrix");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{

scanf("%d",&a[i][j]);
}
}
printf("\nenter Second matrix");
for(i=0;i<p;i++)
{ for(j=0;j<q;j++)
{

scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{ c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
printf("\nFinal Matrix");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
} }
 }