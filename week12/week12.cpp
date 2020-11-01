#include<stdio.h>

int main()
{
	int num[99];
	int count = 0;
	scanf_s("%d", &count);
	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &num[i]);
	}
	
	for (int i = 0; i < count; i++)
	{
		int check = 0;
		
		for (int j = i; j >= 0; j--)
		{
			if (num[i] == num[j] && j != i)
			{
				check++;
			}
		}
		if (check == 0)
		{
			printf("%d ", num[i]);
		}
	}

	return 0;
}
