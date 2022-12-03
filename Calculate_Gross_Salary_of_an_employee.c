#include<stdio.h>
int main()
{
    float bs,da,hra,pf,gs;
    scanf("%f%f%f",&bs,&da,&hra);
    pf=bs*0.12;
    gs=bs+da+hra+pf;
    printf("%.2f
",pf);
    printf("%.2f
",gs);
}