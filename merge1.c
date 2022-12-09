#include<stdio.h>
int m,n,i,j,k=0,a[100],b[100],c[200];
void main()
{
printf("enter the size of first array \n");
scanf("%d",&m);
printf("enter the size of second array \n");
scanf("%d",&n);
printf("enter the element of first array \n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element of second array \n");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
if(j>=n)
{
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
}
}
printf("the mergged array element is \n ");
for(i=0;i<m+n;i++)
{
printf("%d",c[i]);
}
}

