#include<stdio.h>
#include<unistd.h>
int killgram,height;
char name;
//int bmi = killgram/(height*height);
int main(void)


{
    //char name;
    //printf("你的名字是什么？\n");
    //scanf("%c",&name);
   // printf("你好，%c\n",&name);

   // sleep(3);

    //int killgram;


    printf("请输入你的体重：\n");
    scanf("%d",&killgram);

    //int height;

    printf("请输入你的身高：\n");
    scanf("%d",&height);


    printf("已经录入，正在计算中，请稍后。\n");

    float bmi;

    long doubleheight;

    doubleheight=height*height;

    bmi=killgram*doubleheight;

    printf("您的BMI为%f",&bmi);

    return 0;






}