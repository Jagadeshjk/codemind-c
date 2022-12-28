#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    c=n%3;
    if(c==0)
    {
        printf("NORMAL");
    }
    else if(c==1)
    {
        printf("HUGE");
    }
    else
    {
        printf("SMALL");
    }
}