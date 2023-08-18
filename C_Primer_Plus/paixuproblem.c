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
    //int new[total+1];
    int chche;
    //先取第二个数(第二个元素是1)
    for (int i = 1; i <= total; i++)
    {
        chche=array[i];
        for (int j = i-1; j >=0; --j)
        {
            if (array[j]<array[i])
            {
                array[i]=array[j];
            }
            else
            {
                break;
            }
        
        }
        chche=array[i];
        
    }
    return array;
}