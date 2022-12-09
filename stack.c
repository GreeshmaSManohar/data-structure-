#include<stdio.h>
int stack[3],a[100],n,x,ch,i,top;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("enter the size of the stack");
scanf("%d",&n);
printf("stack operation using array");
printf("\n \t 1.push \n \t 2.pop \n \t 3.display \n \t 4.exit");
do
{
printf(" \n  \t enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exit....");
break;
}
default:
{
printf("invalid choice");
}
}
}
while(ch!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("stack is overflow");
}
else
{
printf("enter a value to be pushed");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if (top<=-1)
{
printf("stack is underflow");
}
else
{
printf("deleted element is %d \n",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n the elements in the stack \n");
for(i=top;i>=0;i--)
{
printf("\n %d",stack[i]);
printf(" \n  \t press next choice");
}
}
else
{
printf("stack is empty");
}
}



