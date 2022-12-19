#include<stdio.h>
int main()
{
    int basic,da,hra;
    float gross;
    scanf("%d",&basic);
    if(basic<=10000)
    {
        da=0.8*basic;
        hra=0.2*basic;
        gross=basic+hra +da;
        printf("%0.2f",gross);
        
    }
    else if(basic>10000&&basic<=20000)
    {
        da=0.9*basic;
        hra=0.25*basic;
        gross=basic+hra +da;
        printf("%0.2f",gross);
    }
    else if(basic>20000)
    {
        da=0.95*basic;
        hra=0.3*basic;
        gross=basic+hra+da;
        printf("%0.2f",gross);
        
    }
    else
    {
        printf("Invalid");
        
    }
}