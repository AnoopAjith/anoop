#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
int main()
{
int choice,ele,i;
do
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.display");
printf("\n4.exit");
printf("\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(top==size-1)
{
printf("stack overflow");
}
else
{
printf("enter the element:");
scanf("%d",&ele);
top++;
stack[top]=ele;
printf("element pushed success");
}
break;
case 2:
if(top==-1)
{
printf("stack underflow");
}
else{
printf("deleted element %d",stack[top]);
top--;
}
break;
case 3:
if(top==-1)
{
printf("stack is empty");
}
else{
printf("stack element are:\t");
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
break;
case 4:
printf("exiting");
break;
default:
printf("invalid choice");
}
}
while(choice!=4);
return 0;
}
