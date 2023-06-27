#include <stdio.h>

int main(void)
{
	int cur_people = 0, max_people = 0;
	int inP, outP;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d %d", &outP, &inP);

		cur_people -= outP;
		cur_people += inP;

		if (max_people < cur_people)
			max_people = cur_people;
	}

	printf("%d", max_people);

	return 0;
}