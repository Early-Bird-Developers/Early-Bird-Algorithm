#include <stdio.h>

int fib(int fn)
{
	if (fn == 0)
		return 0;
	else if (fn == 1)
		return 1;
	else
		return fib(fn - 1) + fib(fn - 2);
}

int main(void)
{
	int fn, result;
	scanf("%d", &fn);

	result = fib(fn);
	printf("%d", result);

	return 0;
}