#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void main()
{
    // int day1;
    // int Array[7],index;
    // printf("请输入一周的步数：\n");
    // for (index=0; index < 7; index++)
    // {
    //     scanf("%d",&Array[index]);
    // }
    // printf("您输入的步数分别为：\n");

    // for (index = 0; index < 7; index++)
    // {
    //     printf("%d\t",Array[index]);
    // }
    // printf("\n");
    

    //失败版
    // printf("是否要计算平均步数？(需要请输入1，不需要请输入0）\n");
    // int yesorno;

    // scanf("%d",&yesorno);

    
    // if (yesorno=1)
    // {
    //     float total,avg;

    //     total+=Array[7];
    //     avg=((float)total/7);
    //     printf("平均步数为%f",avg);
        
    // }
    // else if (yesorno=0)
    // {
    //     printf("好的，已停止\n");
    // }
    
    // else
    // {
    //     printf("您输入有误，请重新运行程序");

    // }
    
    //成功版本
    

    int day1,day2,day3,day4,day5,day6,day7;

    printf("请输入7天步数：\n");

    scanf("%d,%d,%d,%d,%d,%d,%d",&day1,&day2,&day3,&day4,&day5,&day6,&day7);
    

    int Array[]={day1,day2,day3,day4,day5,day6,day7};

    int index;


    printf("您输入的步数是：");

    for (index = 0; index < 7; index++)
    {
        printf("%d\t\n",Array[index]);
    }
    
    float sum=(day1+day2+day3+day4+day5+day6+day7);
    float avg=((float)sum/7);


    printf("平均步数为：%f",avg);
    
    return 0;
    

    

}