#include <stdio.h>
#include "Sequencial_binaria.h"

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
