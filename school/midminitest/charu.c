//插入数字  
#include<stdio.h>
int main()
{
    int array[11]={151,156,787,561,5465,132,79,626,45,6};
    int num;
    scanf("%d",&array[10]);
    for (int  i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {

            if(array[j]>array[j+1])//从小到大
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        
    }
    for (int  i = 0; i < 11; i++)
    {
        for (int j = 0; j < 10-i; j++)
        {

            if(array[j]>array[j+1])//从小到大
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < 11; i++)
    {
        printf("%d\n",array[i]);
    }
    

}
