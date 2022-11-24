#include<stdio.h>
void main()
{
int a[50],n,i,j,temp=0;
printf("enter the size of on array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the elememt in an array");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is \n");

for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}


