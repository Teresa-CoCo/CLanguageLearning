#include<stdio.h>
//1.实现简单的输出（与循环套用）
// int main()
// {
//     char array1[]={'P','a','r','k'};
//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%c",array1[i]);  /* code */
//         //return 0;
//     }
    
// }

//2.进阶：重置密码小程序
#include<windows.h>
#include<string.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    char old[20],new[20];

    int i=0;
    while (i==0)
    {
        printf("重置密码小程序\n");
        Sleep(1000);
        printf("正在初始化，请稍后\n");
        Sleep(4000);
        printf("请输入原始密码：\n");
        gets(old);
        printf("请输入新密码（6-19位）\n");
        gets(new);
        if (strlen(new)>=6)
        {
            printf("您的新密码是%s",new);
            return 0;
        }
        else
        {
            printf("您输入的密码长度有误，请重新输入\n");
            printf("稍等将重新重置密码\n");
            Sleep(2000);
            
        }
    }
    

    
    



    
}