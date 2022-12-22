#include<stdio.h>
void main()
{
  int a[30],val,i,n,flag,pos;
  printf("enter the number of elements in an array:\n");
 scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched:\n");
scanf("%d",&val);
for(i=0;i<n;i++)
{
  if(a[i]==val)
     {
       flag=1;
      pos=i;
       break;
}
}
if(flag==1)
printf("element %d found in %d location",val,pos);
else
  
printf("element is not found\n");
}
