#include <stdio.h>
int main() {
    int a, b,sum,dif;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    sum=*pa+*pb;
    dif=*pa-*pb;
    if(dif<0)
     dif=-dif;
    printf("%d\n%d", sum, dif);

    return 0;
}
