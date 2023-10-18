#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define temppath "C:\\hv\\vhd"
#define vpspath "C:\\hv\\vps"
int main()
{
    char command[200];
    sprintf(&command,"powershell New-VHD -ParentPath %s -Path %s -Differencing",temppath,vpspath);
    printf("%s",command);
    return 0;
}