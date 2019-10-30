#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()

{
	int days=1;
	float i=10;

	while (i <= 20)
	{
		i = i + (i*0.1);
		days++;

	}

	printf("cherez %d dney", days);
	return 0;

}
