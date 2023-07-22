// #include<stdio.h>

// int main(void)
// {
//     float height,weight,standardheight,standardweight;
//     int panduan;
//     float nuh,yuhu;

//     printf("请输入你的身高:\n");
//     scanf("%f",&height);

//     if (height>100)
//     {
//         standardheight = height / 100;
//     }
    


//     printf("您的身高为%f米",standardheight);

//     printf("请输入体重：\n");
    
//     scanf("%f",&weight);

//     printf("请选择您刚输入体重的单位：1.公斤，2.市斤");
//     scanf("%d",&panduan);



//     if (panduan == 2)
//     {
//         standardheight = (float)height / 2;
//     }
//     else if (panduan == 1)
//     {
//         standardheight = (float)weight;
//     }
//     else if (panduan != 1 && panduan !=0)
//     {
//         printf("您的输入有误,请重新执行。");/* code */
//         return 0;
//     }
    
    

//     printf("您的体重为%f kg\n",standardweight);


//     yuhu = (float)height*height;

    

//     nuh = (float)weight / yuhu; 

    

    

//     printf("yuhu为%.1f\n",yuhu);

//     printf("bmi为%.1f\n",nuh);

//     if(nuh<18.5)
//     {
//         printf("体重过轻\n");
//         return 0;
//     }
//     else if(18.5<=nuh && nuh<24)
//     {
//         printf("健康体重，请继续保持\n");
//         return 0;

//     }
//     else if(24<=nuh && nuh<27)
//     {
//         printf("体重过重了\n");
//         return 0;
//     }
//     else if (nuh>=27)
//     {
//         printf("体重超重了\n");
//         return 0;
//     }
    

//     return 0;

// }




//Second edition

#include<stdio.h>

int main(void)
{
    float height, weight, standardheight, standardweight;
    int panduan;
    float nuh, yuhu;

    printf("请输入你的身高:\n");
    scanf("%f", &height);

    standardheight = height / 100;

    printf("您的身高为%f米\n", standardheight);

    printf("请输入体重：\n");
    scanf("%f", &weight);

    printf("请选择您刚输入体重的单位：1.公斤，2.市斤\n");
    scanf("%d", &panduan);

    if (panduan == 2)
    {
        standardweight = weight / 2;
    }
    else if (panduan == 1)
    {
        standardweight = weight;
    }
    else
    {
        printf("您的输入有误，请重新执行。\n");
        return 0;
    }

    printf("您的体重为%f kg\n", standardweight);

    yuhu = standardheight * standardheight;

    nuh = standardweight / yuhu;

    printf("yuhu为%.1f\n", yuhu);
    printf("bmi为%.1f\n", nuh);

    if (nuh < 18.5)
    {
        printf("体重过轻\n");
    }
    else if (18.5 <= nuh && nuh < 24)
    {
        printf("健康体重，请继续保持\n");
    }
    else if (24 <= nuh && nuh < 27)
    {
        printf("体重过重了\n");
    }
    else if (nuh >= 27)
    {
        printf("体重超重了\n");
    }

    return 0;
}