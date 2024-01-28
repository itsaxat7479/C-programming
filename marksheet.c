#include<stdio.h>
int main(){
    int phy,math,che,sum,per;
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
    return 0;
}
    
    




