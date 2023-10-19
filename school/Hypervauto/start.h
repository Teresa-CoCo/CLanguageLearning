#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<processthreadsapi.h>
#include<time.h>

void start(int different,int memory,int dynamic,int cpu,int limitcpu,int datadisk,char network,int nesting,int start,char name,char systemone)
{
    int different;
    int memory;
    int dynamic;
    int cpu;
    int limitcpu;
    int datadisk;
    char network;
    int nesting;
    int start;
    char name,systemone;
    printf("正在开启虚拟机，等待用户确认后创建虚拟机\n");
    printf("=======================================\n");
    printf("下面是你输入的信息，输入1创建虚拟机");
    printf("开机来源:本地开机(api暂未开放),模板路径:C:\\hv\\vhd,VM路径:C:\\hv\\vps,名称:%s,模板:%s,差异存盘:%d,内存大小：%d G,是否动态内存：%d,CPU核心数:%d CORE(s),是否限制CPU使用:%d,是否创建数据盘:%d,桥接网卡:%s,虚拟机嵌套:%d,是否开启这个虚拟机:%d",name,systemone,different,memory,dynamic,cpu,limitcpu,datadisk,network,nesting,start);
    int inpuut;
    scanf("%d",&inpuut);
    if (inpuut = 1)
    {
        printf("虚拟机将在三秒后开始创建,请给予管理员权限\n");
        Sleep(3000);


        system("powershell New-VHD -ParentPath C:\\hv\\vhd\\vm.vhdx -Path C:\\hv\\vps\\vm.vhdx -Differencing");
       



    }
    

}