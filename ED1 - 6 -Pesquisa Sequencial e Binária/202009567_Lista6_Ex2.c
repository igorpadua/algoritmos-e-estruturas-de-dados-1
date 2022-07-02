#include <stdio.h>

int sequencial(int vet[], int tam, int chave);
int binario(int vet[], int tam, int item);


int main(int argc, char *argv[]) {
	
	int vet1[] = {2, 7, 11, 33, 54, 85, 90, 115};
	int vet2[] = {2, 7, 11, 33, 54, 85, 90, 115};
	int num, num1;

	num = sequencial(vet1, 8, 54);
	num1 = binario(vet2, 8, 54);

	printf("Busca o valor 54 no vetor.\n");
	printf("Vetor: ");
	for (int i = 0; i < 8; ++i) {
		printf("%d ", vet1[i]);
	}
	printf("\nVet1 = %d comparações\n", num);
	printf("Vet2 = %d comparações\n", num1);

	return 0;
}

int sequencial(int vet[], int tam, int chave) {

	int i, cont = 0;

	while (i < tam && vet[i] != chave) {
		i++;
		cont++;
	}

	if (i < tam) {
		return i;
	} else {
		return cont;
	}
}

int binario(int vet[], int tam, int item) {

	int begin = 0;
	int end = tam - 1;
	int i = 0;
	int cont = 0;

	while (begin <= end) {
		i = (begin + end) / 2;
		cont++;

		if (vet[i] == item) {
			return i;
		}

		if (vet[i] < item) {
			begin = i + 1;
		} else {
			end = 1;
		}
	}
	return cont;
}
