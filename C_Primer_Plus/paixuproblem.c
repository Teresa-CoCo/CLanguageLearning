#include<stdio.h>
#include<windows.h>

//先实现循环输入数组

void input()
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


void sort()
{
    int array[4]={10,11,4,99};
    int cache;
    
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; ++j)
        {
            if (array[j]>array[j+1])
            {
                cache = array[j];
                array[j] = array[j+1];
                array[j+1]= cache;
            }
            
            
        }
        array[0]=cache;
        
        // if(array[0]>array[1])
        // {
        //     cache = array[0];
        //     array[0] = array[1];
        //     array[1] = cache;


        // }
        // if(array[1]>array[2])
        // {
        //     cache = array[1];
        //     array[1]=array[2];
        //     array[2] = cache;
        // }
        // if (array[2]>array[3])
        // {
        //     cache = array[2];
        //     array[2] = array[3];
        //     array[3] = cache;   
        // }
        // else
        // {
        //     continue;
        // }
    }
    printf("排序结果为：%d,%d,%d,%d",array[0],array[1],array[2],array[3],array[4]);
}

int main()
{
    sort();
}