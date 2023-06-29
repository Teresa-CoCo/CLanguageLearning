#include<stdio.h>
#include<unistd.h>


int main()
// {
//     int speed;
//     printf("请输入当前风速大小（单位为海里每小时）\n");
//     scanf("%d",&speed);

//     printf("您输入的是%d",speed);


//     if (speed <= 1)
//       printf("无风");
//     else if(speed <= 3,speed > 1)
//       printf("轻风");
//     else if (speed <= 27,speed > 3)
//       printf("微风");
//     else if (speed > 27,speed <= 47)
//       printf("大风");
//     else if (speed > 47,speed <= 63)
//       printf("暴风");
//     else if (speed > 63)
//       printf("飓风");
//     return 0;
    
    
    
    
// }



// 第二版test
// {
//     int input,output;


//     printf("请输入海风强度（单位为海里/小时）\n");


//     scanf("%d",&input);


//     if (input <= 1)
//     {
//         output = "small";
//     }
//     if(input >=3,input <10)
//     {
//         output = "big";
//     }    
//     else
//     {
//         output = "very big";

//     }

//     printf("风级是%s",&output);
// }

// 比大小
// {
//     int num1,num2;

//     printf("请输入数字1\n");

//     scanf("%d",&num1);

//     printf("请输入数字2\n");

//     scanf("%d",&num2);

//     printf("您输入的数字是%d%d",&num1,&num2);

//     sleep(3);


//     if (num1 < num2)
//     {
//         printf("数字二更大");

//         return 0;
//     }
//     if (num1 > num2)
//     {
//         printf("数字一更大");
//         return 0;
//     }
//     if (num1 = num2)
//     {
//         printf("这两个数字一样大");
//         return 0;
//     }
    
    

    

// }
//成绩判断
{
    int score;
    printf("write down your grade(1/2/3/4/5)");

    scanf("%d",&score);


    switch (score)
    {
    case 5:
        printf("Excellent\n");
        break;
    case 4:
        printf("Good\n");
        break;
    case 3:
        printf("Average\n");
        break;
    case 2:
        printf("not very good\n");
        break;
    case 1:
        printf("bad\n");
        break;
    default:
        printf("Illeagle score\n"); 
        break;
    }


}