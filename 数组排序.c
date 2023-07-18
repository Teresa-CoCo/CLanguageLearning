#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int input1,temp;
    printf("请输入你要录入的数据的个数\n");
    scanf("%d",&input1);


    printf("您将要要输入%d个数据\n",input1);       
    int Array[input1];


    printf("请依次输入你要录入的数字\n");      


    for (temp=0;temp<input1; temp++)
    {
        printf("请输入第%d个数据\n",&temp);         //此处有问题报错，且输出结果有问题
        scanf("%d",&Array[temp]);
    }
    
    


    //排序算法1:选择法
    int Temperate,Pos,temp2;


    for ( temp = 0; temp < input1; temp++)                   //cycle1          
    {
        Temperate = Array[temp];
        Pos = temp;
        for (temp2 = temp+1; temp2 < input1+1; temp2++)     //cycle2（判断下一位是否大于原本数值）
        {
            if (Array[temp2]>Temperate)                //如果大，则重新负值给temperate       
            {
                Temperate =Array[temp2];            //将临时数值重新分配给第temp+1个数
                Pos=temp2;
            }
            
        }
        
    
    Array[Pos]=Array[temp];             //if条件运行完成后，将if判断出的结果分配到数组中保存后，继续进行下一个for循环
    Array[temp]=Temperate;


    }
    







    printf("您输入了一下数据：\n");                         /*测试输入(排序)数据正确性*/

    for ( temp = 0; temp < input1; temp++)
    {
        printf("%d\n",Array[temp]);
    }
    


    







    

    

    
}