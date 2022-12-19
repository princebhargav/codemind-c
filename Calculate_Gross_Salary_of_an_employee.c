#include<stdio.h>
int main()
{
    float basic,pf,da,hra;
    scanf("%f%f%f",&basic,&hra,&da);
    pf=0.12*basic;
    printf("%.2f
%.2f",pf,basic+hra+da+pf);
    
}