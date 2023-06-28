#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int testcase, search_max, max_idx;
	int i, j, k;

	scanf("%d", &testcase);

	int** arr;
	arr = (int**)malloc(sizeof(int*) * testcase);
	for (i = 0; i < testcase; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 10);
	}

	for (i = 0; i < testcase; i++)
	{
		for (j = 0; j < 10; j++)
			scanf("%d", &arr[i][j]);
	}

	for (i = 0; i < testcase; i++)
	{
		k = 0;
		while (k != 3)
		{
			search_max = 0;
			for (j = 0; j < 10; j++)
			{
				if (search_max < arr[i][j])
				{
					search_max = arr[i][j];
					max_idx = j;
				}
			}
			arr[i][max_idx] = 0;
			k++;
		}
		printf("%d\n", search_max);
	}

	for (int i = 0; i < testcase; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}