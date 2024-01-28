#include<stdio.h>
int main(){
 int i,rev=0,rem;
printf("enter the Number:");
scanf("%d",&i);
while(i>0)
{
    rem=i%10;
    rev=rev*10+rem;
    i=i/10;
    
}
  printf(" reverse %d\n",rev);
return 0;
}