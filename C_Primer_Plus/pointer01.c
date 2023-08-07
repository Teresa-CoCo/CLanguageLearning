#include<stdio.h>
void swap(int *a,int *b)//初始化指针
{
    int t = *a;//令t=a指针
    *a = *b;//令a=b
    *b = t;//令b=t
}
int main()
{
    int x =1 , y = 9;
    swap(&x,&y);
    printf("交换数据是:x=%d,y=%d\n",x,y);
    return 0;
}