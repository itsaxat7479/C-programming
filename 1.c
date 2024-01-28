#include<stdio.h>
int main(){
int i,j,row;
printf("enetr the no of rows:\n");
scanf("%d",&row);

for(i=1;i<=row;i++)

    {  
        for(j=i;j<=row;j++)
          {
    printf("* ");

          }
printf("\n");
    }
return 0;
}