#include <stdio.h>
#include <stdlib.h>

void findMinMax(int arr[], int n, int *max, int *min);
int compare(const void *a, const void *b);

int main(void)
{
	int size = 5;
	int numbers[size];
	
	for(int i = 0; i < size; i++)
	{
		printf("Enter a number:  ");
		scanf("%d", &numbers[i]);
	}

	int n = sizeof(numbers) / sizeof(numbers[0]);
	int min, max;
	findMinMax(numbers, n, &max, &min);
	printf("%d\n", min);
	printf("%d\n", max);
}

int compare(const void *a, const void *b)
{
	return(*(int *)a - *(int *)b);
}

void findMinMax(int arr[], int n, int *max, int *min)
{
	qsort(arr, n, sizeof(int), compare);

	*min = arr[0];
	*max = arr[n - 1];
}
