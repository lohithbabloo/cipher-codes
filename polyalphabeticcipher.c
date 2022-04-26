#include<stdio.h>
int decryption(char entext[20],char key[20],int pl)
{
char detext[20];char detext1[20];int j=0;
for(int i=0;i<pl;i++)
{
detext[i]=((entext[i]-97)-(key[i]-97));
if(detext[i]<0)
{
detext[i]+=26;
}
printf("%c",detext[i]+97);
}
}
int encryption(char key[20],char text[20],int ptl)
{
char entext[20];char entext1[20];int j=0;
for(int i=0;i<ptl;i++)
{
entext[i]=(((text[i]+key[i])%97)%26)+97;
}
while(entext[j]!='\0')
{
entext1[j]=entext[j];
j++;
}
printf("%s",entext);
printf("\n");
decryption(entext,key,ptl);
}
int keyconst(char word[20],char text[20],int pl,int kl)
{
int i=0,lk=0,j=0,temp;
char word1[20];
while(word[i]!='\0'){
word1[i]=word[i];
i++;
}
i=0;
for(int temp=kl;temp<pl;temp++){
if(i==kl)
{
i=0;
}
word1[temp]=word[i];
i++;
}
printf("%s",word1);
printf("\n");
encryption(word1,text,pl);
}
int main()
{
char plaintext[20];
char key[20];
int lp=0,lk=0,i=0,j=0;
printf("enter the plaintext:");
scanf("%s",plaintext);
printf("enter the key");
scanf("%s",key);
while(plaintext[i]!='\0')
{
lp++;
i++;
}
while(key[j]!='\0')
{
lk++;
j++;
}
keyconst(key,plaintext,lp,lk);
}

