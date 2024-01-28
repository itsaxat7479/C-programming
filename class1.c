#include<stdio.h>
int main(){
int ar[10],i,n,c;    //linear search
printf("ener the any array no:\n");
scanf("%d",&n);
printf("enter the element of array\n");
for ( i = 0; i < n; i++)

   scanf("%d",&ar[i]);

printf("search element\n");
scanf("%d",&c);
for ( i = 0; i < n; i++)
{
 if(ar[i]==c)
 {
printf("element foud sr no :%d",c);
break;}
}
if(i==n)
printf("not found");

return 0;
}