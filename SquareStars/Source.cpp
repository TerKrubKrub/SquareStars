#include <stdio.h>
int main()
{
	int x, y;
	int i, j;
	scanf_s("%d %d", &x, &y);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}