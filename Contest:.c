#include<stdio.h>
int main()
{
    int x,a,b,total;
    scanf("%d%d%d",&x,&a,&b);
    total=a+b*2;
    if(total>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}