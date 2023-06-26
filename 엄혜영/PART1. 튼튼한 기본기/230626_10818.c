#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, numb;
	int max, min;
	max = -1000001;
	min = 1000001;

	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		scanf("%d", &numb);

		if (numb > max)
			max = numb;

		if (numb < min)
			min = numb;
	}

	printf("%d %d", min, max);

	return 0;
}
