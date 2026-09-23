#include<stdio.h>
int main()
{
int ar[50],size,i,pos,ele;
printf("enter the size:");
scanf("%d",&size);
printf("enter elements:");
for(i=0;i<size;i++)
{
scanf("%d",&ar[i]);
}
printf("the elements are:");
for(i=0;i<size;i++)
{
printf("%d\t",ar[i]);
}
printf("enter the position of element");
scanf("%d",&pos);
printf("enter the element:");
if(pos<=0||pos>size)
{
printf("invalid position");
}
else
{
printf("enter the element");
scanf("%d",&ele);
for(i=size-1;i>=pos-1;i--)
{
ar[i+1]=ar[i];
}
ar[pos-1]=ele;
size++;
}
for(i=0;i<size;i++)
{
printf("%d",ar[i]);
}
return 0;
}

