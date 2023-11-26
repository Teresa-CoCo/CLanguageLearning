//实现一个能够查找数在数组位置，并打印出其在的位置的程序
#include<stdio.h>
int main()
{
    int findnum;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int flag=0;
    int pos=0;
    int nums;
    scanf("%d",&findnum);
    for (int i = 0; i < 10; i++)
    {
        nums=array[i];
        if (nums==findnum)
        {
            flag=1;
            pos=i+1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if (flag==1)
    {
        printf("您要查找的数在数组中的位置是%d",pos);
    }
    else
    {
        printf("您要查找的数不在数组中");
    }

    
}