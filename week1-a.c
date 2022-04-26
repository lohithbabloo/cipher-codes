#include<stdio.h>
int main()
{
int count=0;
char word[] = "Hello World";
char *str;
str = &word[0];
for(int k=0;str[k]!='\0';k++)
{
count+=1;
}
for(int i=0;i<count;i++)
{
printf("%d\n",word[i]^0);
}
}
