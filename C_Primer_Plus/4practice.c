// #include<stdio.h>
// #include<unistd.h>
// int killgram,height;
// //char name;
// //int bmi = killgram/(height*height);
// int main(void)


// {
//     //char name;
//     //printf("你的名字是什么？\n");
//     //scanf("%c",&name);
//    // printf("你好，%c\n",&name);

//    // sleep(3);

//     //int killgram;


//     printf("请输入你的体重：\n");
//     scanf("%d",&killgram);

//     //int height;

//     printf("请输入你的身高：\n");
//     scanf("%d",&height);


//     printf("已经录入，正在计算中，请稍后。\n");

//     float bmi;

//     long doubleheight;

//     doubleheight=height*height;

//     bmi=killgram*doubleheight;

//     printf("您的BMI为%f",&bmi);

//     return 0;






// }



//新版本bmi

#include<stdio.h>


int main()
{
    int height,weight,yuhu;
    long bmi;

    printf("请输入你的身高:\n");
    scanf("%d",&height);

    printf("您的身高为%d",height);

    printf("请输入体重：\n");
    scanf("%d",&weight);

    printf("您的体重为%d\n",weight);


    yuhu = height*height;

    

    //bmi = weight / yuhu; 

    

    

    printf("yuhu为%d\n",yuhu);

    printf("bmi为%d\n",weight%yuhu);

    return 0;

}