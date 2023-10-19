#include<stdio.h>
#include<windows.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b1s.h>
#include<D:\Develop\CLanguageLearning-2\school\Hypervauto\start.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b2s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b3s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b4s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b5s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b6s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b7s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b8s.h>
// #include<D:\Develop\CLanguageLearning-2\school\Hypervauto\b9s.h>
int easycreate()
{
    char name[100];
    char systemone[100];
    printf("请输入你要创建VM的名称\n");
    scanf("%s",&name);
    printf("请输入你要创建虚拟机的系统模板名称，比如 2012");
    scanf("%s",&systemone);
    printf("请输入你要开启机器的规格：1.1c1g 2.1c2g 3.2c2g 4.2c4g 5.4c4g 6. 4c8g 7.8c8g 8.8c16g 9.16c16g\n");
    int input;
    scanf("%d",&input);
    if (input == 1)
    {
        int different = 1;
        int memory = 1;
        int dynamic = 1;
        int cpu=1;
        int limitcpu =0;
        int datadisk = 0;
        char network[100] = "lan";
        int nesting = 0;
        int start = 1;
        qidong(1,1,1,1,0,0,network[100],0,1,name[100],systemone[100]);
    }
    // else if (input == 2)
    // {
    //     b2s();
    // }
    // else if (input == 3)
    // {
    //     b3s();

    // }
    // else if (input == 4)
    // {
    //     b4s();

    // }
    // else if (input == 5)
    // {
    //     b5s();

    // }
    // else if (input == 6)
    // {
    //     b6s();
    // }
    // else if (input == 7)
    // {
    //     b7s();

    // }
    // else if (input == 8)
    // {
    //     b8s();

    // }
    // else if (input == 9)
    // {
    //     b9s();

    // }
    else
    {
        printf("您的输入有误，请重新运行程序");
    }

    
    
    
}