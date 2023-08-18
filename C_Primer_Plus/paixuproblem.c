#include<stdio.h>
#include<windows.h>

//先实现循环输入数组

int main()
{
    printf("请输入要输入的个数");
    int total;
    scanf("%d",&total);
    int array[total+1];
    int input;
    for (int i=1;i <= total; i++)
    {
        printf("请输入第%d个数值",i);
        scanf("%d",&input);
        array[i]=input;
    }
    //进行排序
    
    
}