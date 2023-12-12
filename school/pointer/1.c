#include<stdio.h>
 int main()
 {
    int array[5]={1,2,3,4,5};
    int tem;
    for (int  i = 0; i < 5; i++)//简单的输出数组
    {
        printf("%d ",array[i]);
        
    }
    printf("\n");
    int *ptr = array;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*ptr++);
    }
    //目标：从大到小排序
    //使用假指针
    ptr =array;//注意 每次都要归位
    for (int i = 0; i < 5; i++)
    {
       for (int  j = 0; j < 5-i; j++)
       {
        if (ptr[j]<ptr[j+1])
        {
            tem=ptr[j];
            ptr[j]=ptr[j+1];
            ptr[j+1]=tem;
        }
        
       }
       
        
    }
    
// 使用真指针
    ptr =array;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5-i; j++)
    {
        if (*ptr<*(ptr+j))
        {
            tem = *(ptr+j);
            *ptr=*(ptr+j);
            *(ptr+j)=tem;
        }
        
    }
        
    }
    
    
    ptr = array;
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*ptr++);
    }
    
    
    
    
 }