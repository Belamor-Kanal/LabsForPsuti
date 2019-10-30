#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>

int main()
{
	float a, b, c,min;
	printf("a=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("c=");
	scanf_s("%f", &c);
	min = a;
	if (a == b && b == c) printf("\n") && printf("Ravnostoronniy,  Plo=%f\n", a * b * c);
	else if (a == b || b == c || c == a) printf("Ravnobedrenniy,  Perim=%f\n", (a + b + c));
	else if (b < min) min = b;
	if (c < min) min = c;
	if (a != b && b!= c && c!= a) printf("naimenshaya storona = %f\n", min);
	system("pause");
	return 0;
}