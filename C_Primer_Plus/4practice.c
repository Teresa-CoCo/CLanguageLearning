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


int main(void)
{
    float height,weight;
    float nuh,yuhu;

    printf("请输入你的身高（米）:\n");
    scanf("%f",&height);

    printf("您的身高为%f米",height);

    printf("请输入体重：（kg）\n");
    scanf("%f",&weight);

    printf("您的体重为%f kg\n",weight);


    yuhu = (float)height*height;

    

    nuh = (float)weight / yuhu; 

    

    

    printf("yuhu为%.1f\n",yuhu);

    printf("bmi为%.1f\n",nuh);

    if(nuh<18.5)
    {
        printf("体重过轻\n");
        return 0;
    }
    else if(18.5<=nuh && nuh<24)
    {
        printf("健康体重，请继续保持\n");
        return 0;

    }
    else if(24<=nuh && nuh<27)
    {
        printf("体重过重了\n");
        return 0;
    }
    else if (nuh>=27)
    {
        printf("体重超重了\n");
        return 0;
        
    }
    

    return 0;

}

//以上解决了bmi计算问题，第一版由于忘记统一单位导致混乱，这板统一使用千克计算，第三版将加入选项，可以自由选择kg/g，cm/m

//第四版将尝试与网页对接，实现在线填入数据，本地进行计算。