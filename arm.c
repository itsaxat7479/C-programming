#include<stdio.h>
int main(){
    //armstrong number
int n,c,r,arm=0;
printf("enter the no");
scanf("%d",&n);
c=n;
while(n>0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
if(c==arm)

    printf("arm");

else
printf("not arm ");
return 0;
}