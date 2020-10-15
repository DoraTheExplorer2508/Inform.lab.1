#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, n, c, b, d, k, v, p;
	c = 11; //коэффицент
	y = 10; //степень
	b = 1;
	d = 1;
	n = 0; //answer
	k = 0;
	v = 9;
	int a[10];
	printf("Input x: ");
	scanf("%d", &x);
	a[9] = x;

	while (v > 0)
	{
		a[v - 1] = a[v] * x;
		v = v - 1;
	}

	while (d <= 10)
	{
		b = b * x;
		d = d + 1;
	}

	if (x == 0)
		while (y >= 1)
		{
			n = n + c * x;
			c = c - 1;
			y = y - 1;
			printf("%d*%d^%d + ", c, x, y);
		}
	else
		while (y >= 1)
		{
			n = n + c * a[k];
			k = k + 1;
			c = c - 1;
			y = y - 1;

			printf("%d + ", n);
		}
	printf("1 = %d\n", n + 1);
	printf("answer: %d", n + 1);

	return 0;

}