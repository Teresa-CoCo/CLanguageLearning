#include<stdio.h>
#include<windows.h>

int main()
{
    int shuzi=114;
    int *zhizhen;
    zhizhen=&shuzi;

    //scanf("%d",&shuzi);
    printf("%d",*zhizhen);
    printf("adress is %d",zhizhen);
    return 0;

}