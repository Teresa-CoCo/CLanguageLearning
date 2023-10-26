#include<stdio.h>
#include<windows.h>
#include<time.h>
void ssh()
{
    char username[100];
    int password = 0;
    printf("请输入你要连接目标计算机的ip地址（默认端口：22，若要更改端口请输入ip:端口）\n");
    int ssh = 0;
    scanf("%d",&ssh);
    printf("请输入你要链接目标计算机作为的用户名");
    scanf("%s",&username);
    printf("请输入你要链接目标计算机对应用户名的密码");
    scanf("%d",&password);
    char code[100];
    sprintf(code,"ssh %s@%d",username,password);


    system(code);
}