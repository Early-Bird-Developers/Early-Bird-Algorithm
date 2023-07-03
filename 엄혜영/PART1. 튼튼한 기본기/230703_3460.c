// [BOJ] 3460 - ������

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getDigit(int numbMax)
{
	int digit = 0;

	do
	{
		digit++;
	} while (numbMax > (pow(2.0, (double)digit) - 1));

	return digit;
}

int* initArr(int digitArr[])
{
	int arrSize = sizeof(digitArr) / sizeof(int);

	for (int i = 0; i < arrSize; i++)
		digitArr[i] = -1;

	return digitArr;
}

void getBinNumb(int cNumb[], int cAmount, int digitArr[], int digit)
{
	int currNumb, remain, maxIdx;

	digitArr = initArr(digitArr);

	//printf("�ִ� �ڸ���: %d", digit);

	// testCase ������ŭ �ݺ�
	for (int i = 0; i < cAmount; i++)
	{
		// ���� testCase
		//printf("** TestCase %d **\n", i + 1);
		currNumb = cNumb[i];

		// testCase�� ���� ������ ���
		for (int j = 0; j < digit; j++)
		{
			remain = currNumb % 2;
			currNumb /= 2;
			digitArr[j] = remain;
			
			if(remain == 1)
				printf("%d ", j);
			
			if (currNumb == 1)
			{
				printf("%d", j+1);
				break;
			}
		}
		printf("\n");
	}
}

int main(void)
{
	int cAmount, digit;
	int numbMax = 0;

	scanf("%d", &cAmount);
	int *cNumb = (int*)malloc(sizeof(int) * cAmount);

	for (int i = 0; i < cAmount; i++)
	{
		scanf("%d", &cNumb[i]);

		if (cNumb[i] > numbMax)
			numbMax = cNumb[i];
	}

	// �ڸ��� ���ϱ�
	digit = getDigit(numbMax);
	int* digitArr = (int*)malloc(sizeof(int) * digit);

	//printf("�ڸ���: %d\n", digit);

	// �� ���̽��� ������ ���� digitArr�� ����
	getBinNumb(cNumb, cAmount, digitArr, digit);

	free(cNumb);
	free(digitArr);
	return 0;
}