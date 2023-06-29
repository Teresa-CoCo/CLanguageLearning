#include<stdio.h>


main()
{
    int speed;
    printf("请输入当前风速大小（单位为海里每小时）\n");
    scanf("%d",&speed);

    if (speed <= 1)
    printf("无风");
    else if(speed <= 3,speed > 1)
    printf("轻风");
    else if (speed <= 27,speed > 3)
    printf("微风");
    else if (speed > 27,speed <= 47)
    printf("大风");
    else if (speed > 47,speed <= 63)
    printf("暴风");
    else if (speed > 63)
    printf("飓风");
    return 0;
    
    
    
    
}