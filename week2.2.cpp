#include<stdio.h>
int main()
{
	int input;
	int i, j;
	printf("Enter number : ");
	scanf("%d", &input);
	for(i = 0; i < input; i++)
	{
		for(j = 0; j < input; j++)
		{
			printf("*");
		}
	}
	return 0;
}

