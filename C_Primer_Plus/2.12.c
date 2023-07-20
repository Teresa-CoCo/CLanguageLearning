#include<stdio.h>

//1，2例题跳过
//3例题plus版
int main()
{
    int temp;
    
    printf("请输入你的年龄(年，请取整)");
    scanf("%d",temp);

    int yearold = temp*365;
    printf("恭喜您，您已经出生了%d天！",yearold);

    return 0;
}
