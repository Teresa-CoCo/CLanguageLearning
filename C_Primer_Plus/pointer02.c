#include<stdio.h>
#include<windows.h>

void main()
{
    int *p,*q,a[5],b[5],i;
    p = &a[0];
    q = b;
    printf("请输入数组a\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("请输入数组b\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("数组啊中有:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d",*(p+i));
    
    }
    printf("\n");
    printf("数组b中有：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d",*(q+i));
    }
    printf("\n");

    return 0;

    
    

}