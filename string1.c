#include<stdio.h>
int main(){
char ch,line[10];
int c=0;
printf("enter the no text:press ente the word");
do
{
    ch=getchar();
    line[c]=ch;
    c++;
}while ("ch=\n");
c=c-1;
line[c]="\0";
printf("%s",line);

return 0;
}