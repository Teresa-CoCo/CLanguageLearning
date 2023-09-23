#include<stdio.h>
int max(int a,int b)
{
    if(a>=b){
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    
    int a, b, c, d,ac,ad,bc,bd,e,f,g,h;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ac=a*c;
    ad=a*d;
    bc=b*c;
    bd=b*d;
    e=max(ac,ad);
    f=max(e,bc);
    g=max(f,bd);
    if(a<=0&b>=0||c<=0&d>=0)
    {
        h=max(g,0);
        printf("%d",h);
        return 0;
    }
    printf("%d",g);
    return 0;
}