#include<stdio.h>
#define max 100;
int largest(int[]);
int n;
int main()
{
int arr[max],startno,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
startno=largest(arr);
printf("%d",stno);
return 0;
}