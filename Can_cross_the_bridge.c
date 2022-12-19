#include<stdio.h>
int main()
{
    int a,b,x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<=y<=z)
    {
        b=z-y;
        a=b/x;
        printf("%d",a);
    }
    else
    {
        printf("invalid");
        
    }
}