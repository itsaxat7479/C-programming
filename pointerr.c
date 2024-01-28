#include<stdio.h>
int main(){
    //swaping no 
int n,a,b,*p,*q,temp;
p=&a;
q=&b;
printf("enter two no");
scanf("%d %d",&a,&b);
printf("besfore swap %d %d",a,b);
temp=*p;
*p=*q;
*q=temp;
printf("after swap is a=%d,b=%d",*p,*q);

return 0;
}