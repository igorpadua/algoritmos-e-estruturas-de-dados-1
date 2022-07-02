#include <stdio.h>

void swap(char *a, char *b);
void heapify(char arr[], int n, int i);
void heapSort(char arr[], int n);

int main(int argc, char *argv[]) {

	char a[] = {"Ordenado com Heap Sort"};

	printf("\nVetor desorganizado:\n");
	printf("%s\n", a);
	printf("\n");

	heapSort(a, 22);

	printf("\nVetor organizado:\n");

	printf("%s\n", a);
	printf("\n");

	return 0;
}

void swap(char *a, char *b) {

	char tmp = *a;
	*a = *b;
	*b = tmp;

}

void heapify(char arr[], int n, int i) {

	int max = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] < arr[max]) {
		max = left;
	}
	if (right < n && arr[right] < arr[max]) {
		max = right;
	}

	if (max != i) {
		swap(&arr[i], &arr[max]);
		heapify(arr, n, max);
	}

}

void heapSort(char arr[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	for (int i = n - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}

}
