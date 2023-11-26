//二分法查找
#include<stdio.h>
int main()
{
    int array[10]={151,156,787,561,5465,132,79,626,45,6};
    int begin=0;
    int end=9;
    int num;
    scanf("%d",&num);
    for (int i = 0; i < 10; i++)
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
    while (begin<=end)
    {
        int mid=(begin+end)/2;
        if (array[mid]==num)
        {
            printf("您要查找的数在数组中的位置是%d",mid+1);
            break;
        }
        else if (array[mid]>num)
        {
            end=mid-1;
        }
        else
        {
            begin=mid+1;
        }
    }
    
    

}