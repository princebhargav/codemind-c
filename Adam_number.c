#include<stdio.h>
int main()
{
    int n,q,s=0,sn1,sn2,r,rsn2;
    scanf("%d",&n);
    sn1=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        
    }
    sn2=s*s;
    n=sn2;
    s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
        
    }
    rsn2=s;
    if(sn1==rsn2)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
        
    }
}