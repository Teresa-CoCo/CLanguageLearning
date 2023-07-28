#include<stdio.h>       
#define hour 1000
#define limit1 40 //for extra fee
#define limit2 300
#define limit3 150
#define rate 1.5//for extra
#define tax1 0.15
#define tax2 0.2
#define tax3 0.25

int main(void)
{
    float time,totaltime,withouttax,youget,extra;
    start:

        printf("Please enter your work time\n");
        scanf("%f",&time);
        if (time > limit1)
        {
            extra = (time - limit1)*rate;
            totaltime = extra + time - limit1;
            withouttax = hour * totaltime;
            youget = withouttax - (limit2 * tax1)-(limit3 * tax2)-((withouttax - 450)*tax3);



        }
        else
        {
            withouttax = hour * time;
            if (withouttax > 300 && withouttax < 450)
            {
                youget = withouttax -(limit2*tax1)-(withouttax - 300)*tax2;
         
            }
            else if (withouttax > 450)
            {
                youget = withouttax - (limit2 * tax1)-(limit3 * tax2)-((withouttax - 450)*tax3);
            }
        
        
        }
        printf("You will get %f dollars this week\n Have a good day!",youget);
        //return 0;
        goto start;
    

}