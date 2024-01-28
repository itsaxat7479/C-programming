#include<stdio.h>
int main(){
int a[4],i;
printf("enter array: \n");
for (i=0;i<4;i++)
{
scanf("%d",&a[i]);
}

printf("\narray of element: ");
for (i=0;i<4;i++)
{
printf("%d ",a[i]);
}


return 0;
}