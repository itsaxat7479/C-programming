#include<stdio.h>
int main()
{
int a,b,c;
printf("enter any number:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swap\n a=%d\n,b=%d:",a,b);
return 0;
}




