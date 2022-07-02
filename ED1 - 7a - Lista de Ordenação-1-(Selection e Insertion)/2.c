#include <stdio.h>

// Funções:
int *selections_sort(int vetor[], int tam);

int main(int argc, char const *argv[]) {

        int vetor[] = {10, 5, 6, 1, 20, 2};

        printf("\nOdernar esse vetor com Selection Sort: ");
        for (int i = 0; i < 6; i++) {
                printf("%d", vetor[i]);
                if (i != 5) {
                        printf(",");
                } else{
                        printf(".");
                }
        }
        printf("\n");

        selections_sort(vetor, 6);

        printf("\nOrdenado: ");
        for (int i = 0; i < 6; i++) {
                printf("%d", vetor[i]);
                if (i != 5) {
                        printf(",");
                } else{
                        printf(".");
                }
        }

        return 0;
}

int *selections_sort(int vetor[], int tam) {

        int min, aux;

        for (int i = 0; i < tam - 1; i++) {
                min = i;
                for (int j = i + 1; j < tam; j++) {
                        if (vetor[min] > vetor[j]) {
                                min = j;
                        }
                }
                aux = vetor[min];
                vetor[min] = vetor[i];
                vetor[i] = aux;
        }

        return vetor;
}
