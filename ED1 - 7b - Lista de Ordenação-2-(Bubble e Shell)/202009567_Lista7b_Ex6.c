#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shellsort(int vet[], int tam);
void bublesort(int vetor[], int tam);

int main(int argc, char const *argv[]) {

        int vet[5000], vet2[5000];

        for (int i = 0; i < 5000; i++) {
                vet[i] = rand();
        }
        for (int i = 0; i < 5000; i++) {
                vet2[i] = vet[i];
        }

        bublesort(vet, 5000);
        shellsort(vet2, 5000);

        return 0;
}

void shellsort(int vet[], int tam) {

        int valor, h, j;
        clock_t tempo;

        h = 1;
        tempo = clock();

        while (h < tam) {
                h = 3 * h + 1;
        }

        while (h > 0) {
                for (int i = h; i < tam; i++) {
                        valor = vet[i];
                        j = i;
                        while (j > h - 1  && valor <= vet[j - h]) {
                                vet[j] = vet[j - h];
                                j = j - h;
                        }
                        vet[j] = valor;
                }
                h /= 3;
        }
        tempo -= clock();

        printf("Tempo demorado com shell sort: %f\n", ((float)tempo)/CLOCKS_PER_SEC);

}

void bublesort(int vetor[], int tam) {

        int aux, sinal;
        clock_t tempo;

        tempo = clock();

        for (int i = tam - 1; i > 0; i--) {
                sinal  = 0;
                for (int j = 0; j < i; j++) {
                        if (vetor[j] > vetor[j + 1]) {
                                sinal = 1;
                                aux = vetor[j];
                                vetor[j] = vetor[j + 1];
                                vetor[j + 1] = aux;
                        }
                }
                if (sinal == 0) {
                        break;
                }
        }
        tempo -= clock();

        printf("Tempo demorado com bubble sort: %f\n", ((float)tempo)/CLOCKS_PER_SEC);
}
