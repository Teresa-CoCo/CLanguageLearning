#include<stdio.h>
#include<windows.h>
#include<D:\Develop\CLanguageLearning-2\school\Hypervauto\start.h>


void b1s()
{
    char name,systemone;
    char network[100] ="lan";
    printf("请输入你要创建VM的名称\n");
    scanf("%s",&name);
    printf("请输入你要创建虚拟机的系统模板名称，比如 2012");
    scanf("%s",&systemone);
    // int different = 1;
    // int memory = 1;
    // int dynamic = 1;
    // int cpu=1;
    // int limitcpu =0;
    // int datadisk = 0;
    // char network = 'lan';
    // int nesting = 0;
    // int start = 1;
    qidong(1,1,1,1,0,0,network,0,1,name,systemone);
}