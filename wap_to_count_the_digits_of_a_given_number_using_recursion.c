#include<stdio.h>
int countdigits(int num)
{
int count = 0;
if(num>0)
{
count++;
count(num/10);
}
else{
return count;
}
int main(){
int num , count = 0;
scanf("%d",&num);
count=countdigits(num);
return 0;
}