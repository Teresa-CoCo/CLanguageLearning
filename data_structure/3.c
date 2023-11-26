#include<stdio.h>
#include<string.h>
void main(void)
{
    char StrName[5][10],Strtmp[10];
    short i,j,tmp;
    printf("input country name:\n");
    for(i=0;i<5;i++)
        gets(StrName[i]);
    for(i=0;i<5;i++)
    {
        for(tmp=i,j=i+1;j<5;j++)
            if(strcmp(StrName[j],StrName[tmp])<0)
                tmp=j;
        if(tmp!=i)
        {
            strcpy(Strtmp,StrName[tmp]);
            strcpy(StrName[tmp],StrName[i]);
            strcpy(StrName[i],Strtmp);

        }
        puts(StrName[i]);
    }
}