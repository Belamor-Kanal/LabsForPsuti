#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()

{
	float a, b, f=0;
	printf("a ="); scanf("%f", &a);
	printf("b ="); scanf("%f", &b);

	if (a < 0 && b == 0){
		f = 3 * a + 2;
	}
	else if (a < 0 && b != 0) {
		f = (3 * a) / (2 * b);
	}
	else {
		f = 3 * a - 2 * b;
	}

	printf("f = %f\n", f);
		/*system("pause");*/
		return 0;
}
