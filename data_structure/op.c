#include<stdio.h>
void main(void)
{
    int num;
    char StringNum[20];
    int i,j,Num[20];
    puts("input a number:");
    scanf("%d",&num);
    for(i=0;num!=0;i++)
    {
        Num[i]=num%10;
        num/=10;
    }
    for(j=0;j<i;++j)
        StringNum[j]= (Num[j] == 1) ? '1' : '0';
    StringNum[j]='\0';
    puts(StringNum);
}