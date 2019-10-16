#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int c = 5, d;
    float a = 5, b;
    printf("Enter b: "); scanf_s("%lf", &b);
    printf("Enter d: "); scanf_s("%d", &d);
    
    a=a+b-2;
    printf("1) a=a+b-2\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    c=c+1;
    printf("2) c=c+1\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    d=c-a+d; 
    printf("2) d=c-a+d\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    a=a*c;
    printf("2) a=a*c\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    c=c-1;
    printf("3) c=c-1\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    a=a/10;
    printf("2) a=a/10\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    c=c/2;
    printf("2) c=c/2\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    b=b-1;
    printf("2) b=b-1\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    d=d*(c+b+a);
    printf("4) d=d*(c+b+a)\n\n vars: a=%f; b=%f; c=%d; d=%d;\n\n",a,b,c,d);
    getch();
    return 0;
}