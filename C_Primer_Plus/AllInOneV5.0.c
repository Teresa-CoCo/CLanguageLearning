#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\translong.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\shoesize.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\bmiplus.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\eletric.h>
#include<D:\Develop\CLanguageLearning-1\C_Primer_Plus\lucky.h>
#include<D:\Develop\CLanguageLearning-2\C_Primer_Plus\excel.h>
#include<D:\Develop\CLanguageLearning-2\C_Primer_Plus\twobit.h>
#include<D:\Develop\CLanguageLearning-2\C_Primer_Plus\hyperv.h>
int main(void)
{
    int grate;
    int i =0;
    SetConsoleOutputCP(65001);
    if ( i == 0)
    {
        printf("欢迎使用C语言工具箱V2.0版\n");
        Sleep(1000);
        printf("请输入你要使用的功能：\n1.转换长度工具  2.转换鞋码工具  3.BMI健康指数计算工具 4.多功能电表 5.幸运数字与运势 6.excel快查7.二进制十进制互转8.运行hyperv开机bat（新）（beta）");
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
        else if (grate == 6)
        {
            excel();
        }
        else if(grate == 7)
        {
            twobit();
        }
        else if(grate == 8)
        {
            hyperv();
        }
        
        else
        {
            printf("请检查您输入的正确与否，本程序未能匹配到您想要运行的模块\n");
            //break;
        }
    }
    

    
    
    
    
    
}
