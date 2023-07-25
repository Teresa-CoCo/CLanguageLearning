#include<stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 不是素数
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;  // 不是素数
        }
    }

    return 1;  // 是素数
}


int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d 是素数\n", num);
    } else {
        printf("%d 不是素数\n", num);
    }

    return 0;
}









// int main(void)
// {
//     //double num,div;
//     div = 2;
//     printf("Welcome to use tool to judege the num if can be divided\n");
//     printf("First please input your numbuer you wanna judge:\n");
//     scanf("%lf",&num);
    
// }
