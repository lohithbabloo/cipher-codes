#include<stdio.h>
#include<math.h>
int inverse(int deckey[3][3],int a[3][1])
{
float matin[3][3];
int decrypt[3][1];
int det=0;float val=26;
for(int i=0;i<1;i++)
{
for(int j=0;j<3;j++)
{
det+=(deckey[i][j]*((deckey[(i+1)%3][(j+1)%3]*deckey[(i+2)%3][(j+2)%3]-deckey[(i+1)%3][(j+2)%3]*deckey[(i+2)%3][(j+1)%3])));
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
matin[i][j]=(deckey[(i+1)%3][(j+1)%3]*deckey[(i+2)%3][(j+2)%3]-deckey[(i+1)%3][(j+2)%3]*deckey[(i+2)%3][(j+1)%3]);
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(matin[i][j]<0)
{
matin[i][j]=-1*matin[i][j];
}
matin[i][j]=matin[i][j]/det;
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<1;j++)
{
for(int k=0;k<3;k++)
{
decrypt[i][j]=decrypt[i][j]+matin[i][k]*a[k][j];
}
}
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%f\t",matin[i][j]);
}
printf("\n");
}
}
int encryption(int a[3][3],int b[3][1],int c[3][1])
{
int i,j,k;char z;
for(i=0;i<3;i++)
{
for(j=0;j<1;j++)
{
c[i][j]=0;
for(k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
inverse(a,c);
}
int main()
{
int wordmat[3][1];
int keymat[3][3];
int encrypt[3][1];
char str[]="PAY";
for(int i=0;i<3;i++)
{
for(int j=0;j<1;j++)
{
wordmat[i][j]=str[i]%65;
}
}
for(int k=0;k<3;k++)
{
for(int l=0;l<3;l++)
{
scanf("%d",&keymat[k][l]);
}
}
for(int p=0;p<3;p++)
{
for(int m=0;m<3;m++)
{
printf("%d",keymat[p][m]);
}
printf("\n");
}
for(int p=0;p<3;p++)
{
for(int m=0;m<1;m++)
{
printf("%d",wordmat[p][m]);
}
printf("\n");
}
encryption(keymat,wordmat,encrypt);
}

