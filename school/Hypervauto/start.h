#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<processthreadsapi.h>
#include<time.h>
#define temppath "C:\\hv\\vhd"
#define vpspath "C:\\hv\\vps"
void start(int different,int memory,int dynamic,int cpu,int limitcpu,int datadisk,char network,int nesting,int start,char name,char systemone)
{
    // int different;
    // int memory;
    // int dynamic;
    // int cpu;
    // int limitcpu;
    // int datadisk;
    // char network;
    // int nesting;
    // int start;
    // char name,systemone;
    printf("正在开启虚拟机，等待用户确认后创建虚拟机\n");
    printf("=======================================\n");
    printf("下面是你输入的信息，输入1创建虚拟机");
    printf("开机来源:本地开机(api暂未开放),模板路径: %s ,VM路径: %s ,名称:%s,模板:%s,差异存盘:%d,内存大小：%d G,是否动态内存：%d,CPU核心数:%d CORE(s),是否限制CPU使用:%d,是否创建数据盘:%d,桥接网卡:%s,虚拟机嵌套:%d,是否开启这个虚拟机:%d",temppath,vpspath,systemone,different,memory,dynamic,cpu,limitcpu,datadisk,network,nesting,start);
    //可新增功能：选择模板路径 选择VM路径
    int inpuut;

    scanf("%d",&inpuut);
    if (inpuut = 1)
    {
        printf("虚拟机将在三秒后开始创建,请给予管理员权限\n");
        Sleep(3000);
        char comone[100];
        char comtwo[100];
        char comthree[100];
        char comfour[100];
        char comfive[100];
        char comsix[100];
        char comseven[100];
        char comeight[100];
        char comnine[100];
        char comten[100];
        // int different = 1;
        // int memory = 1;
        // int dynamic = 1;
        // int cpu=1;
        // int limitcpu =0;
        // int datadisk = 0;
        // char network = 'lan';
        // int nesting = 0;
        // int start = 1;
        sprintf(comone,"powershell New-VHD -ParentPath %s\\%s.vhdx -Path %s\\%s.vhdx -Differencing",temppath,vpspath,temppath,vpspath);
        sprintf(comtwo,"powershell New-VM -Name ""%s"" -MemoryStartupBytes %sGB -VHDPath %s\\%s.vhdx -SwitchName %s",name,memory,vpspath,name,network);
        sprintf(comthree,"powershell Set-VMMemory %s -DynamicMemoryEnabled $false",name);
        sprintf(comfour,"powershell Set-VMMemory %s -DynamicMemoryEnabled $true -MinimumBytes 32MB -StartupBytes %sGB -MaximumBytes %sGB -Priority 50 -Buffer 20",name,memory,memory);
        sprintf(comfive,"powershell Set-VM -VMName %s -CheckpointType Disabled",name);
        sprintf(comsix,"powershell Set-VMProcessor %s -Count %d",name,cpu);
        sprintf(comseven,"PowerShell Start-VM -Name %s",name);
        system(comone);
        system(comtwo);
        system(comthree);
        system(comfour);
        system(comfive);
        system(comsix);
        system(comseven);





    }
    

}