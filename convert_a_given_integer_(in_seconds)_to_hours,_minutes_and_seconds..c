#include<stdio.h>
int main()
{
    int sec,a,min,hour,n;
    scanf("%d",&n);
    hour=n/3600;
    a=n%3600;
    min=a/60;
    sec=a%60;
    printf("H:M:S-%d:%d:%d",hour,min,sec);
}