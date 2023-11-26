//冒泡从小到大排序
#include<stdio.h>
int mpcxdd()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }



    printf("排序后的数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
    
}
//从大到小排序
int mpcddx()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    int temp;
    for (int i = 0; i < 10; i++)//遍历10次
    {
        for (int j = 0; j < 9-i; j++)//比较9次
        {
            if (array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }
    printf("排序后的数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
}
//改良版从大到小排序
int glbcddx()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    int temp;
    int flag=0;
    for (int i = 0; i < 10; i++)//遍历10次
    {
        for (int j = 0; j < 9-i; j++)//比较9次
        {
            if (array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
            
        }
        if (flag==0)
        {
            break;
        }
        
    }
    printf("排序后的数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
    
}
int main()
{
    int a;
    printf("请选择排序方式：\n");
    printf("1.从小到大排序\n");
    printf("2.从大到小排序\n");
    printf("3.改良版从大到小排序\n");
    scanf("%d",&a);
    if (a==1)
    {
        mpcxdd();
    }
    else if (a==2)
    {
        mpcddx();
    }
    else if (a==3)
    {
        glbcddx();
    }
    else
    {
        printf("您的输入有误，请重新输入");
    }
}