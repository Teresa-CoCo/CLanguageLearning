#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int nowyear;
    int index;
    printf("请输入现在的年份，格式为年（连着写）\n");
    scanf("%d",nowyear);
    if (nowyear%4 == 0 )
    {
        printf("今年为闰年，二月有29天\n");
        int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
        for ( index = 0; index < 12; index++)
        {
            printf("Month %d has %2d days.\n",index +1,month[index]);

        }
        


    }
    else
    {
        printf("今年不是闰年，二月有28天\n");
        int monthnormal[12]={31,29,31,30,31,30,31,31,30,31,30,31};

        for ( index = 0; index < 12; index++)
        {
            printf("Month %d has %2d days.\n",index +1,monthnormal[index]);

        }

    }
    


}