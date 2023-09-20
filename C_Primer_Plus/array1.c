#include<stdio.h>
#include<windows.h>

int main(void)
{
    int inputone=0;
    int value=0;

    int young=0;
    
    printf("Please input num you wanna calculate");
    scanf("%d",&inputone);

    int array[value];


    for ( young = 0; young <inputone; young++)
    {
        printf("Please input your data NO.%d",value);
        scanf("%d",&array[value]);
    }

    printf("The date you inputed is \n");

    for ( young = 0; young < inputone; young++)
    {
        printf("%d\n",array[young]);

    }
    
    return 0;


}