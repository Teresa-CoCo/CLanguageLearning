#include<stdio.h>
#include<windows.h>

int one()
{
    float a,b,c;
    printf("Please input three float number");
    scanf("%f%f%f",&a,&b,&c);//Why not using "space"
    int max = a;
    if (b > max)
    {
        max = b;
        if (c  > max)
        {
            max = c;
        }
        
    }
    printf("max is %f",max);
    
    
}
int small(int a,int b)
{
    int c = a;
    if (b<a)
    {
        c = b;
    }
    return c;
    

}
int two()
{
    int min,one,two,three;
    scanf("%d %d %d",&one,&two,&three);
    min = small(one,two);
    min = small(min,three);
    printf("The smallest is%d",min);
}

int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0;  // 不是素数
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;  // 不是素数
        }
    }

    return 1;  // 是素数
}

int main()
{
//one
    one();
//two
    two();


//three
    
    int num;
    SetConsoleOutputCP(65001);
    scanf("%d", &num);
    if (isPrime(num)) 
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    return 0;

}