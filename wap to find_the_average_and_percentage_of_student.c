#include<stdio.h>
struct anuj
{
int age;
char name[20];
int a,b,c,d,e;
float ave,per;
}p;
void main()
{
scanf("%d",&p.age);
scanf("%d%d%d%d%d",&p.a,&p.b,&p.c,&p.d,&p.e);
scanf("%s",&p.name);
p.ave=(p.a+p.b+p.c+p.d+p.e)/5;
p.per=p.ave;
printf("average=%f\n,percentage=%f",p.ave,p.per);
return 0;
}