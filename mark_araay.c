#include<stdio.h>
int main(){
int mark[5],avg,sum=0,per,i;
printf("enter the mark  of sbubject:");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&mark[i]);
    }
    printf("Show Mark");
for ( i = 0; i < 5; i++)
{
   sum+=mark[i];
   avg=sum/5;
  
}
printf("avg is %d",avg);
return 0;
}