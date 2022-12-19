#include<stdio.h>
int main()
{
    int p,c,b,m,com,total;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&com);
    total=p+c+b+m+com;
    if(total>=450&&total<=500)
    {
        printf("Grade A");
        
    }
    else if(total>=400 && total<450)
    {
        printf("Grade B");
        
        
    }
    else if (total>=350 && total<400)
    {
        printf("Grade C");
        
    }
    else if(total>=300 && total<350)
    {
        printf("Grade D");
        
    }
    else if(total>=250 && total<300)
    {
        printf("Grade E");
        
    }
    else 
    {
        printf("Grade F");
        
    }
}