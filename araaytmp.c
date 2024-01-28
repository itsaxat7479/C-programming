#include<stdio.h>
int main(){
int temp[2][7],i,j,week,city;
printf("enter temprature of two cities:");
for(i=0; i<city; i++)
{
    for(j=0; j<week; j++)
{
    printf("city %d Day %d",i+1,j+1);
    scanf("%d",&temp[i][j]);
}
}
printf("temp of two cities of a week");
for ( i = 1; i <=week; i++)
{
for(i=1; i<=city; i++)

    {
        printf("city is %d day %d=%d",i,j,temp[i][j]);
        }
}

return 0;
}