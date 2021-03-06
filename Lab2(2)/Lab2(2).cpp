// Lab2(2).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

#define PUT_DELIME(x, h, b) (x) + (h) >= (b) ? '\n': ' '
#define FUNC1(x) exp(-x)*x
#define COND1(x) (x)<-2

#define FUNC2(x) exp(2-(x))+exp(x)
#define COND2(x) (x)>=2 && (x)<=4

#define FUNC3(x) 4-(x)*exp(1-3*(x))
#define COND3(x) (x)>4

#define FUNC(x) COND1(x) ? FUNC1(x) : (COND2(x) ? FUNC2(x) : FUNC3(x))

int main() 
{
	double a = -3.0, b = 5.0, h = 0.2, x;
	printf("X:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%10.2f%c", x, PUT_DELIME(x, h, b));
	}
	printf("Y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%10.3f%c", FUNC(x), PUT_DELIME(x, h, b));
	}

	return 0;
}