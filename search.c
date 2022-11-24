#include<stdio.h>
void main()
{
int a[50],i,n,key,f=0;
printf("enter the array size");
scanf("%d",&n);
printf("enter the element in an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key value");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if (a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("the element is found ");
}
else
{
printf("element is not found");
}
}

