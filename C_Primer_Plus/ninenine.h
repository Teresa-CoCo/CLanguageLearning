#include<stdio.h>
int ninenine()
{
    int a[9][9];
    for (int i = 1; i < 2; i++)
    {
        a[0][i-1]=1*i;
        a[0][i]=0;
    }
    for (int i = 1; i < 3; i++)
    {
        a[1][i-1]=2*i;
        a[1][i]=0;
    }
    for (int i = 1; i < 4; i++)
    {
        a[2][i-1]=3*i;
        a[2][i]=0;
    }
    for (int i = 1; i < 5; i++)
    {
        a[3][i-1]=4*i;
        a[3][i]=0;
    }
    for (int i = 1; i < 6; i++)
    {
        a[4][i-1]=5*i;
        a[4][i]=0;
    }
    for (int i = 1; i < 7; i++)
    {
        a[5][i-1]=6*i;
        a[5][i]=0;
    }
    for (int i = 1; i < 8; i++)
    {
        a[6][i-1]=7*i;
        a[6][i]=0;
    }
    for (int i = 1; i < 9; i++)
    {
        a[7][i-1]=8*i;
        a[7][i]=0;
    }
    for (int i = 1; i < 10; i++)
    {
        a[8][i-1]=9*i;
        a[8][i]=0;
    }
for (int i=0;i<9;i++) {
    for (int j=0;j<9;j++) {
        if (j==0)
            {
                printf("\n");
            }
        if (a[i][j]!=0) {
            
            
            // printf("\n");
            printf("%d×%d=%d     ",j+1,i+1,a[i][j]);
        }
        else {
            break;
        }
    }
}
}