#include<stdio.h>
int main()
{
int a[100],b[100],c[200];
int n1,n2;
int i=0,j=0,k=0;
printf("enter the size of first array:");
scanf("%d",&n1);
printf("enter elements of first sorted array:");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter size of second array:");
scanf("%d",&n2);
printf("enter elements of second sorted array");
for(j=0;j<n2;j++)
scanf("%d",&b[j]);
i=0;
j=0;
while(i<n1&&j<n2)
{
if(a[i]<=b[j])
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
while(i<n1)
{
c[k]=a[i];
i++;
k++;
}
while(j<n2)
{
c[k]=b[j];
j++;
k++;
}
printf("merged sorted array:");
for(i=0;i<n1+n2;i++)
printf("%d\t",c[i]);
return 0;
}
