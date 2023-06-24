#include <stdio.h>

void divisor(int n, int k)
{
	int cnt = 0;

	for (int i = 1; i < (n + 1); i++)
	{
		if (n % i == 0)
		{
			cnt++;

			if (cnt == k)
			{
				printf("%d", i);
				return;
			}
		}
	}
	printf("0");
}

int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);

	divisor(n, k);

	return 0;
}
