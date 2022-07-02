#include <stdio.h>

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

int main(int argc, char *argv[]) {

	int a[] = {5, 13, 2, 25, 7, 17, 20, 8, 4};

	printf("\nVetor desorganizado:\n");
	for (int i = 0; i < 9; ++i) {
		printf("%d\n", a[i]);
	}
	printf("\n");

	heapSort(a, 9);

	printf("\nVetor organizado:\n");
	for (int i = 0; i < 9; ++i) {
		printf("%d\n", a[i]);
	}
	printf("\n");

	return 0;
}

void swap(int *a, int *b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;

}

void heapify(int arr[], int n, int i) {

	int max = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[max]) {
		max = left;
	}
	if (right < n && arr[right] > arr[max]) {
		max = right;
	}

	if (max != i) {
		swap(&arr[i], &arr[max]);
		heapify(arr, n, max);
	}

}

void heapSort(int arr[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	for (int i = n - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);

		heapify(arr, i, 0);
	}

}
