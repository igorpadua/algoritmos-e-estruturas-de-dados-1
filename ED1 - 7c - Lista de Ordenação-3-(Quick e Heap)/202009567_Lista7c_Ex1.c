#include <stdio.h> 

void ordem(int *vet, int began, int tam);

int main(int argc, char *argv[]) {

	int vet[] = {5, 13, 7, 20, 12, 9, 1, 4, 18, 3};

	printf("\n");	

	ordem(vet, 0, 10);

	printf("\n");	

	return 0;
}

void ordem(int *vet, int began, int tam) {

	int i, j, pivo, aux;

	i = began;
	j = tam - 1;	
	pivo = vet[(began + tam) / 2];

	while (i <= j) {
		while (vet[i] < pivo && i < tam) {
			i++;
		}
		while (vet[j] > pivo && j > began) {
			j--;
		}
		if (i <= j) {
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] = aux;
			i++;
			j--;
			printf("Vetor: ");
			for (int i = 0; i < 10; ++i) {
				printf("%d ", vet[i]);		
			}
			printf("\n");
		}
	}
	if (j > began) {
		ordem(vet, began, j + 1);
	}
	if (i < tam) {
		ordem(vet, i, tam);		
	}
}
