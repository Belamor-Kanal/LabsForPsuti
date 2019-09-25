#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c = 5, d;
    float a = 5, b;
    printf("Enter b: "); scanf_s("%lf", &b);
    printf("Enter d: "); scanf_s("%d", &d);
    a=a+b-2;
    printf("1) a=a+b-2\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    d=(c+1)-a+d;
    printf("2) d=(c+1)-a+d\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    a=a*(c-1);
    printf("3) a=a*(c-1)\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    d=d*((c/2)+(b-1)+(a/10));
    printf("4) d=d*((c/2)+(b-1)+(a/10))\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    getch();
    return 0;
}
