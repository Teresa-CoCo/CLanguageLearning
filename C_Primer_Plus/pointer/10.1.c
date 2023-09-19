#include<stdio.h>
#include<windows.h>
#define MONTHS 12
int main()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};//定义每个月有多少天
    int index;//中间变量

    for (index  = 0;  index< MONTHS; index++)//循环1-12所有月份
    {
        printf("Month %d has %2d days.\n",index +1,days[index]);

    }
    return 0;
    

}