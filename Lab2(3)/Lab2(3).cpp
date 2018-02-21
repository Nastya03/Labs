// Lab2(3).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

int main()
{
	double a = -4, b = 4, c = -4, d = 4, hx = 0.1, hy = 0.1;
	printf("%c\\%c", 'y', 'x');
	for (double x = a; x <= b; x += hx)
		printf("\t%8.2f", x);
	printf("\n");
	for (double y = c; y <= d; y += hy)
	{
		printf("%.2f",y);
		for (double x=a; x <=b; x+=hx)
		{
			double z = pow(x*y, 1 / 3);
				printf("\t%8.2f", z);
		}
		printf("\n");
	}
	printf("\n");
    return 0;
}

