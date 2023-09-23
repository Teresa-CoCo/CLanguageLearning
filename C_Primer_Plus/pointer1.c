#include<stdio.h>
#include<windows.h>

int main()
{
    int a = 4;
    int b[] = {1,2,3,4,5};
    int *q = &b[0];
    int *p = &a;

    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",*(q+1));

    for (int jack = 0; jack < 5; jack++)//循环读取q上从0到4的内存地址，从而读取数组的值
    {
        printf("%d\n",*(q+jack));
    }
    //p相当于内存地址，给*p赋值相当于在p的内存上指向了 int a的地址


}