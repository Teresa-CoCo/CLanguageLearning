#include<stdio.h>
#define rate1  0.13230
#define rate2  0.15040
#define rate3  0.30025
#define rate4  0.34025
#define limita  360
#define limitb  108
#define limitc  252
#define limitd  720


int main(void)
{
    double bill,kwh;
    printf("Please input your electric kwh:\n");
    scanf("%lf",&kwh);
    
    if (kwh < limita )
    {
        bill = kwh * rate1;
    }
    else if (kwh >limita && kwh < limita+limitb)
    {
        bill = limita * rate1 + ( kwh - limita) * rate2;
    }
    
    else if (kwh > limita + limitb && kwh < limita+limitb+limitc)
    {
        bill = limita * rate1 + limitb * rate2 + (kwh-limita-limitb) * rate3;
    }
    else
    {
        bill = limita *rate1+limitb*rate2+limitc*rate3+(kwh - limita -limitb -limitc) *rate4;
    }
    printf("You need to pay :%lf for the bill\n",bill);
    return 0;
    
    
}