#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int input1,temp;
    printf("请输入你要录入的数据的个数\n");
    scanf("%d",input1);


    printf("您将要要输入%d个数据\n",input1);
    int Array[input1];


    printf("请依次输入你要录入的数字\n");


    for (temp=0;temp<input1; temp++)
    {
        printf("请输入第%d个数据\n",&temp);
        scanf("%d",&Array[temp])
    }


    printf("您输入了一下数据：\n");                         /*测试输入数据正确性*/

    for ( temp = 0; temp < input1; temp++)
    {
        print("%d",Array[temp]);
    }
    


    







    

    scanf("%d")

    
}