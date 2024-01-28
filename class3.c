#include<stdio.h>
int main(){
int ar[10];
int i,j,n,temp;
printf("enetr any element in aray:");
scanf("%d",&n);
printf("enter element of arary:");
for ( i = 0; i < n; i++)
{
scanf("%d",&ar[i]);

}
for ( i = 0; i < n; i++)
{
    
        for ( j = 0; j <n-i-1; j++)
        
{
    if (ar[j]<ar[j+1])
    {
       temp=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=temp;
           }
           }
           }
printf("sorted array is given as follow \n");
for ( i = 0; i < n; i++)
{
 printf("%d\t",ar[i]);
}


return 0;
}