//排序后删除
#include<stdio.h>
int main()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    int temp;
    for(int i=0;i<10;i++)
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
   //下午完场删除补充

}