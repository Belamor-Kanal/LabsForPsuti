#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{
	float x,ODZ, Z = 0;
	printf("x =");scanf("%f", &x);

	const double PI = 3.14159265;
	const double e = 2.718281828459045;
	ODZ= (sqrt(abs(pow(e, sin(x)) - (PI / 7))));
	Z = (pow(tan(x), 2) - log10(pow(3 * x, 2))) / (sqrt(abs(pow(e, sin(x)) - (PI / 7))));
	if (ODZ != 0) printf("Z = %f\n", Z);
	else printf("NONE");
	/*system("pause");*/
	return 0;
}
