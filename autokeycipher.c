#include<stdio.h>
int decryption(char entext[20],char key[20],int k)
{
char detext[20];
for(int i=0;i<k;i++)
{
detext[i]=(((entext[i]-97)-(key[i]-97))%26)+97;
}
printf("decrypted text:%s",detext);
}
int encryption(char plainword[20],char key[20],int k)
{
char entext[20];char entext1[20];int i=0;
while(entext[i]!='\0')
{
entext1[i]=entext[i];
i++;
}
for(i=0;i<k;i++)
{
entext[i]=(plainword[i]-97)+(key[i]-97)+97;
}
printf("cipher text:%s\n",entext);
decryption(entext,key,k);
}
int main()
{
char plaintext[20];
char autokey;
char keystream[20];
int i=0;
printf("enter the plaintext:");
scanf("%s",plaintext);
printf("enter the autokey:");
scanf("%s",&autokey);
while(plaintext[i]!='\0')
{
i++;
}
for(int j=0;j<i;j++)
{
if(j==0)
{
keystream[j]=autokey;
}
else
{
keystream[j]=plaintext[j-1];
}
}
printf("%s\n",keystream);
encryption(plaintext,keystream,i);
}

