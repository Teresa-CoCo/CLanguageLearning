//This Project aims to help you to calculate your shoesize to your country's common shoes' size.
#include<stdio.h> //common

int main(void){
    int input;
    float test,europe,usa,eng,china,temp,linshi;

    printf("欢迎使用鞋子尺码换算工具");

//wrong direction


    // printf("请输入您要换算的尺码：\n");
    // scanf("%d",&input);
    // if (input > 100)//input is mm
    // {
    //     test =input / 10;
    // }
    
    // else
    // {
    //     test = input;
    // }
    printf("请输入您要使用的模式：\n1.欧洲尺码换算为其他\n2.中国尺码换算为其他尺码\n3.美国尺码换算为其他尺码\n4.英式尺码换算为其他尺码\n（如果不输入默认为欧洲尺码）");

    printf("请输入您要换算的尺码：\n");

    scanf("%f",&test);



    //This Project default use china "cm" edition as standard input

    // europe = test * 2 - 10;
    // usa = test -18 +0.5;
    // eng = test -18;

    scanf("%d",&input);

    if (input == 1 && input == 0)
    {
        linshi = test +10;
        float f2 = 2;      //Not Working
        temp = linshi / f2;//
        china = temp;
        europe = test * 2 - 10;
        usa = test -18 +0.5;
        eng = test -18;
        printf("经计算，您的中国尺码是%f\n您的欧洲尺码是%f\n您的美国尺码是%f\n您的英国尺码是%f\n",china,europe,usa,eng);
        

    }
    if (input == 2)
    {
        temp = test;
        
        if (temp > 100)  //加入盲输
        {
            china = temp / 10;
        }
        else
        {
            china = temp;
        }
        
        europe = test * 2 - 10;
        usa = test -18 +0.5;
        eng = test -18;
        printf("经计算，您的中国尺码是%f(mm)\n您的欧洲尺码是%f\n您的美国尺码是%f\n您的英国尺码是%f\n",china,europe,usa,eng);

    }
    if (input == 3)
    {
        temp = test + 18 -0.5;
        china = temp;
        europe = test * 2 - 10;
        usa = test -18 +0.5;
        eng = test -18;
        printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f\n您的美国尺码是%f\n您的英国尺码是%f\n",china,europe,usa,eng);
        
    }
    if (input == 4)
    {
        temp = test + 18;
        china = temp;
        europe = test * 2 - 10;
        usa = test -18 +0.5;
        eng = test -18;
        printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f\n您的美国尺码是%f\n您的英国尺码是%f\n",china,europe,usa,eng);
    }
    
    
    


    
}
