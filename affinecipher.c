#include<stdio.h>
#define SIZE 30
int decryption(int r[],int k,int j,int m)
{
int z;int decrypt[SIZE];int v;
for(int i=1;i<26;i++)
{
if((k*i)%26==1){
z=i;
}
}
for(int i=0;i<m;i++)
{
decrypt[i]=(z*(r[i]-j));
decrypt[i]=((decrypt[i]%26)+26)%26;
}
for(int i=0;i<m;i++)
{
printf("%c",(decrypt[i]+65));
}
}
int encryption(char a[],int b,int c,int k)
{
int ascii[SIZE],encrypt[SIZE],i=0;
for(int i=0;i<k;i++)
{
if(a[i]>'a' && a[i]<'z')
{
ascii[i]=a[i]%97;
ascii[i]=((ascii[i]*b)+c)%26;
encrypt[i]=ascii[i]+65;
}
if(a[i]>'A' && a[i]<'Z')
{
ascii[i]=a[i]%65;
ascii[i]=((ascii[i]*b)+c)%26;
encrypt[i]=ascii[i]+65;
}
}
for(int i=0;i<k;i++)
{
printf("%c",encrypt[i]);
}
decryption(ascii,b,c,k);
}
int main()
{
char input[SIZE];
int i=0;
int count=0;
int key1;int key2;
int fkey1[SIZE],fkey2[SIZE];
printf("enter the input");
scanf("%s",input);
while(input[i]!='\0')
{
count+=1;
i++;
}
printf("enter the key values:");
scanf("%d",&key1);
scanf("%d",&key2);
encryption(input,key1,key2,count);
}

