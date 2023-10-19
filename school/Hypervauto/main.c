//Author : Teresa
//bat edition Author : @one188

#include<stdio.h>
#include<windows.h>
#include<b1s.h>
#include<easycreate.h>

#define temppath "C:\\hv\\vhd"
#define vpspath "C:\\hv\\vps"

int main()
{
    int input = 0;
    SetConsoleOutputCP(65001);
    printf("==============================\n");
    printf("Hyper-V Auto VM-manager\n");
    printf("Hyper-V Bat 4.0重构版\n");
    printf("模板存放路径: %s\n",temppath);
    printf("VPS磁盘存放路径: %s\n",vpspath);
    Sleep(1000);
    printf("1.简单创建VM\n2.复杂创建VM\n3.改变VM配置\n4.删除VM\n5.列出虚拟机\n6.开启虚拟机\n7.关闭虚拟机\n8.重启虚拟机\n9.退出脚本\n\n\n");
    scanf("%d",&input);
    if (input = 1)
    {
        easycreate();
    }
    if (input = 2)
    {
        // difficultcreate();
    }
    if (input = 3)
    {
        // change();
    }
    if (input = 4)
    {
        // delete();
    }
    if (input = 5)
    {
        // list();
    }
    if (input = 6)
    {
        // enable();
    }
    if (input = 7)
    {
        // disable();
    }
    if (input = 8)
    {
        // restart();
    }
    if (input = 9)
    {
        return 0;
    }

    

    

}