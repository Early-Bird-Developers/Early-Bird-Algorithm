// [BOJ] 2309 - 일곱 난쟁이
#include <stdio.h>

int main(void)
{
	int dwarf[9];
	int total = 0;
	int min, minIdx;
	int find = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &dwarf[i]);
		total += dwarf[i];
	}
	total -= 100;
	// total - 100 = 두 가짜 난쟁이의 합

	// 가짜 난쟁이를 찾으면 해당 배열의 값을 0으로
	// 반복문을 빠져나간다.
	for (int i = 0; i < 9; i++)
	{
		for (int j = i; j < 9; j++)
		{
			if (i == j)
				continue;

			if (dwarf[i] + dwarf[j] == total)
			{
				dwarf[i] = 0;
				dwarf[j] = 0;
				find = 1;
				break;
			}
		}
		if (find == 1)
			break;
	}

	// print
	for (int i = 0; i < 9; i++)
	{
		min = 100;

		for (int j = 0; j < 9; j++)
		{
			if (dwarf[j] == 0)
				continue;

			if (min > dwarf[j])
			{
				min = dwarf[j];
				minIdx = j;
			}
		}
		if (min == 100)
			break;

		printf("%d\n", min);
		dwarf[minIdx] = 0;

	}

	return 0;
}