#include <stdio.h>

// Funções:
int *insertion_sort(int vetor[], int tam);

int main(int argc, char const *argv[]) {

        int vetor[] = {10, 20, 3, 15, 5, 1, 4, 2};

        printf("\nOdernar esse vetor com Selection Sort: ");
        for (int i = 0; i < 8; i++) {
                printf("%d", vetor[i]);
                if (i != 7) {
                        printf(",");
                } else{
                        printf(".");
                }
        }
        printf("\n");

        insertion_sort(vetor, 8);

        printf("\nOrdenado: ");
        for (int i = 0; i < 8; i++) {
                printf("%d", vetor[i]);
                if (i != 7) {
                        printf(",");
                } else{
                        printf(".");
                }
        }

        return 0;
}

int *insertion_sort(int vetor[], int tam) {

        int i, j, tmp;

        for (int i = 1; i < tam; i++) {
                j = i;
                while (j > 0 && vetor[j - 1] > vetor[j]) {
                        tmp = vetor[j];
                        vetor[j] = vetor[j - 1];
                        vetor[j - 1] = tmp;
                        j--;
                }
        }

        return vetor;
}
