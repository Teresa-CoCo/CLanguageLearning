#include<stdio.h>
int main()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    printf("排序前的数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);

    }
    int temp;
    for (int i = 0; i < 10; i++)
    {
        int pos=i;
        for (int j = i+1; j < 10; j++)
        {
            if (array[pos]<array[j])
            {
                pos=j;
            }
            
        }
        if (pos!=i)
        {
            temp=array[i];
            array[i]=array[pos];
            array[pos]=temp;
        }
        
        
        
    }
    printf("排序后的数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",array[i]);
    }
    
    
}