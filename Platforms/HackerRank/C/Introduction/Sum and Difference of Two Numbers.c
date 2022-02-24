#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,i,g,h;
    scanf("%d %d" ,&a,&b);
    scanf("%f %f" ,&e,&i);
    c=a+b;
    d=a-b;
    g=e+i;
    h=e-i;
    printf("%d %d" ,c,d);
    printf("\n");
    printf("%.1f %.1f" ,g,h);
    return 0;
}
