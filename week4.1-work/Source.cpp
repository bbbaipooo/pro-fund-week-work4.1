#include<stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int y = 1; y <= n; y++) 
	{
		for (int x = 1; x <= y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}