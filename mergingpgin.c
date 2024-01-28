#include<stdio.h>
int main(){
    int a,b,c,sum,avg,choise,i,j,n,rev=0,rem,multi,div,sub,*p,*q,phy,math,che,per;
printf("\n\n  PROGRAM");
printf("\n *************");
printf("\n <1> Add of two no");
printf("\n <2> swapping of two no");
printf("\n <3> sum and average");
printf("\n <4> swap without variable");
printf("\n <5> Star pattern");
printf("\n <6> reverse no");
printf("\n <7> sum,sub,multiply and division");
printf("\n <8> sum using pointer");
printf("\n <9> marksheet ");
printf("\n <10> even or odd ");
printf("\n <11> matrix");
printf("\n <0> exit");
printf("\n");
printf("\n enter your choise:>");
scanf("%d",&choise);
switch (choise)
{
case 1:
   {
    printf("enter any three value:\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("sum =%d",sum);
   }
    break;
    case 2:
    {
        printf("enter any number:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swap\n a=%d\n,b=%d:",a,b);

    }
    break;
case 3:{
    printf("enter any three value:\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=(a+b+c)/3;
printf("sum a is =%d\navg is a =%d",sum,avg);

}
break;
case 4:{
     printf("enter any number:");
    scanf("%d%d",&a,&b);
    printf("before swap is %d , %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
}
break;
case 5:{
    printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
    printf("* ");
}
printf("\n");}
}
break;
case 6:{
    printf("enter the Number:");
scanf("%d",&i);
while(i>0)
{
    rem=i%10;
    rev=rev*10+rem;
    i=i/10;
    
}
  printf(" reverse %d\n",rev);
}
break;
case 7:{
    printf("enter two no:");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
div=a/b;
printf("sum is= %d\n sub is:%d\n div is: %d",sum,sub,div);
}
break;
case 8:{
    p=&a;
q=&b;
printf("enetr the two number:/n");
scanf("%d %d",&a,&b);
sum=*p+*q;
sub=*p-*q;
printf("sum is %d/n sub is %d",sum,sub);
}
break;
case 9:{
     printf("enter the mark:");
    scanf("%d%d%d",&phy,&che,&math);
    sum=che+phy+math;
    printf("sum =%d",sum);
    per=sum/3;
    printf("per=%d",per);
    if (per>45&&per<=65)
    {
        printf("students 3rd division\n");
    }
    else if (per>65&&per<=85)
    {
        printf("students gets 2nd div");
    }
    
    else if (per>=85 && per<=100)
    {
        printf("first div");
    }
    else
    printf("fail");
}
break;
case 10:{
     int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n%2==0)
    {
      printf("Even no ");
    }
    else
    {
    printf("Odd no ");
    }
}
break;
break;
default:
    break;
}

return 0;
}