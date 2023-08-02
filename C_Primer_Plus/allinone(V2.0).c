#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\translong.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\shoesize.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\bmiplus.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\eletric.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\lucky.h>

int main(void)
{
    int grate;
    int i =0;
    SetConsoleOutputCP(65001);
    if ( i == 0)
    {
        printf("欢迎使用C语言工具箱V2.0版\n");
        Sleep(1000);
        printf("请输入你要使用的功能：\n1.转换长度工具  2.转换鞋码工具  3.BMI健康指数计算工具 4.（新）多功能电表 5.（新）幸运数字与运势");
        scanf("%d",&grate);
        if (grate == 1)
        {
            translong();
        }
        else if (grate == 2)
        {
            transshoe();
        }
        else if (grate == 3)
        {
            bmicalculator();
        }
        else if (grate == 4)
        {
            electric();
        }
        else if (grate == 5)
        {
            lucky();
        }
        else
        {
            printf("请检查您输入的正确与否，本程序未能匹配到您想要运行的模块\n");
            //break;
        }
    }
    

    
    
    
    
    
}
// void translong()
// {

//     float chose,input,calculate,mile,foot,meter,inch,yard; //init things
//     printf("欢迎使用长度换算系统工具\n");
//     printf("请输入你要输入的单位：\n1.米  2.英尺  3.英寸  4.英里  5.码");
//     scanf("%f",&chose);
//     printf("请输入你要换算的数字：\n");
//     scanf("%f",&input);
//     if (chose == 1)
//     {

//         meter = input;
//         foot = meter * 3.2808;
//         inch = meter * 39.370;
//         mile =  meter / 1000 * 0.621;
//         yard = meter * 1.0936;
//         printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);

//     }
// void transshoe()
// {

// }
// void bmicalculator()
// {

// }
// void eletric()
// {

// }
// void lucky()
// {

// }