// Калькулятор.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <stdio.h>


int main()
{
	double a, b, res;
	char act;
	while (true)
	{
		int p;
		printf("1 - Calculator\n2 - Exit\n");
		scanf("%d", &p);
		if (p != 1)
			break;
		else
		{
			printf("Write expression(without spaces): ");
			scanf("%lf%c%lf", &a, &act, &b);
			switch (act) 
			{
			case '+': res = a + b; break;
			case '-': res = a - b; break;
			case '*': res = a * b; break;
			case '/': res = a / b; break;
			default:
				break;
			}
			printf("Result = %.2f\n", res);
		}
	}
}

