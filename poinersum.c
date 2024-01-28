#include<stdio.h>
int main(){
int a,b,*p,*q,sum,sub,multi;
p=&a;
q=&b;
printf("enetr the two number:/n");
scanf("%d %d",&a,&b);
sum=*p+*q;
sub=*p-*q;
printf("sum is %d/n sub is %d",sum,sub);
return 0;
}