#include<stdio.h>
int main(){
int a[10],n,pos,i;
printf("enter the arrasy of element");
scanf("%d",&n);
for (i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("\nenter the pos");
scanf("\n %d",&pos);
if (pos>=n)
{
    printf("invalid value");
}
else
{
    for( i = pos-1; i < n; i++)
    a[i]=a[i+1];
    printf("\n new array is");
    for ( i = 0; i < n-1; i++)
    printf("\n %d",a[i]);
    {
        /* code */
    }
    
    {
        /* code */
    }
    
}
return 0;
}