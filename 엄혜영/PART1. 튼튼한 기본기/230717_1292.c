#include <stdio.h>

int sigma(int numb)
{
	int sum = 0;
	int i = 0;
	int result = 0;
	int remain;

	if (numb == 1)
	{
		return 1;
	}
	else if (numb == 2)
	{
		return 3;
	}

	while (sum <= numb)
	{
		i++;
		sum += i;
	}
	sum -= i;
	remain = numb % sum;
	for (int j = 0; j < (i-1); j++)
	{
		result += (j + 1) * (j + 1);
	}
	result += i * remain;

	return result;
}

int main(void)
{
	int result;
	int start, end;
	int s_start, s_end;

	scanf("%d %d", &start, &end);

	//-- 예외처리: start == 1인 경우 error 발생함
	if (start == 1)
		s_start = 0;
	else
		s_start = sigma(start - 1);
	s_end = sigma(end);


	result = s_end - s_start;
	printf("%d", result);

	return 0;
}