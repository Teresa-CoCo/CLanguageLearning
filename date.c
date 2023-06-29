#include<stdio.h>
#include<unistd.h>

int main()
{
    int input,month,day,year;

    printf("请输入你的日期 年/月/日\n");
    scanf("%d/%d/%d",&year,&month,&day);

    printf("您输入的时间是%d年%d月%d日\n");

    sleep(1);

    printf("是否要输入下一个日期？是请输入1\n");

    scanf("%d",&input);

    if (input =1)
    {

        printf("请输入你的日期 年/月/日\n");
        scanf("%d / %d / %d",&year,&month,&day);
        printf("您输入的时间是%d年%d月%d日\n");
        sleep(10);
    }
    else
    {
        return 0;
    }
    



    


}