#include<stdio.h>
int main()
{
int arr[10],i;
for(i=0;i<7;i++)
{
scanf("%d",&arr[i]);
}
for(i=6;i>=0;i--)
{
printf("arr[%d]=%d",i,arr[i]);
}
return 0;
}