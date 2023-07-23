#include<stdio.h>
#include<windows.h>

int main(void)
{
    int hudshuh;
    SetConsoleOutputCP(65001);
    printf("欢迎使用c语言工具箱V1.0版本\n");

    printf("请输入你想使用的内容：\n1.转换长度工具  2.转换鞋码工具  3.BMI健康指数计算工具\n");

    scanf("%d",&hudshuh);

    if (hudshuh == 1)
    {
        SetConsoleOutputCP(65001);
        float chose,input,calculate,mile,foot,meter,inch,yard; //init things
        printf("欢迎使用长度换算系统工具\n");
        printf("请输入你要输入的单位：\n1.米  2.英尺  3.英寸  4.英里  5.码");
        scanf("%f",&chose);
        printf("请输入你要换算的数字：\n");
        scanf("%f",&input);
        if (chose == 1)
        {

            meter = input;
            foot = meter * 3.2808;
            inch = meter * 39.370;
            mile =  meter / 1000 * 0.621;
            yard = meter * 1.0936;
            printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);
        }
        else if (chose == 2)
        {
            foot = input;
            meter = foot * 0.3048;
            inch = meter * 39.370;
            mile =  meter / 1000 * 0.621;
            yard = meter * 1.0936;

            printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);
        }
        else if (chose == 3)
        {
            inch = input;
            meter = inch * 0.0254;
            foot = meter * 3.2808;
        
            mile =  meter / 1000 * 0.621;
            yard = meter * 1.0936;

            printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);


        }
        else if (chose == 4)
        {
            mile = input;
            meter = mile * 1609.34 ;
            foot = meter * 3.2808;
            inch = meter * 39.370;
        
            yard = meter * 1.0936;
            printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);


        }
        else if(chose == 5)
        {
            yard = input;
            meter = yard * 0.9144;
            foot = meter * 3.2808;
            inch = meter * 39.370;
            mile =  meter / 1000 * 0.621;
        

            printf("%f米=%f英尺=%f英寸=%f英里=%f码\n",meter,foot,inch,mile,yard);



        }

        return 0;
        
    }
    else if(hudshuh == 2)
    {
        int input;
        SetConsoleOutputCP(65001);
        float test,europe,usa,eng,china,temp,linshi;
        printf("欢迎使用鞋子尺码换算工具");
        printf("请输入您要使用的模式：\n1.欧洲尺码换算为其他\n2.中国尺码换算为其他尺码\n3.美国尺码换算为其他尺码\n4.英式尺码换算为其他尺码\n（如果不输入默认为欧洲尺码）");
        scanf("%d",&input);
        printf("请输入您要换算的尺码：\n");
        scanf("%f",&test);
        if (input == 1 || input == 0)//input is europe
        {
            china = (test+10)/2 ;
            europe = test;
            usa = china -18 +0.5;
            eng = china -18;
            printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f码\n您的美国尺码是%f码\n您的英国尺码是%f码\n",china,europe,usa,eng);
        

        }
        if (input == 2)//input is china
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
            printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f码\n您的美国尺码是%f码\n您的英国尺码是%f码\n",china,europe,usa,eng);



        }
        if (input == 3)//input is usa
        {

            temp = test + 18 -0.5;
            china = temp;
            europe = china * 2 - 10;
            usa = test ;
            eng = china -18;
            printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f码\n您的美国尺码是%f码\n您的英国尺码是%f码\n",china,europe,usa,eng);
        
        }
        if (input == 4)//input is eng
        {

            temp = test + 18;
            china = temp;
        
            europe = china * 2 - 10;
            usa = china -18 +0.5;
            eng = test;
            printf("经计算，您的中国尺码是%fcm\n您的欧洲尺码是%f码\n您的美国尺码是%f码\n您的英国尺码是%f码\n",china,europe,usa,eng);
        }

        return 0;

    }
    else if(hudshuh == 3)
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
    
}