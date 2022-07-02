#include <stdio.h>
#include <stdlib.h>

void print(int *vet);
void shellsort(int vet[], int tam);

int main(int argc, char const *argv[]) {

        int vet[100];

        for (int i = 0; i < 100; i++) {
                vet[i] = rand();
        }

        shellsort(vet, 100);

        return 0;
}

void shellsort(int vet[], int tam) {

        int valor, h, j;

        h = 1;

        while (h < tam) {
                h = 3 * h + 1;
        }

        while (h > 0) {
                for (int i = h; i < tam; i++) {
                        valor = vet[i];
                        j = i;
                        while (j > h - 1  && valor >= vet[j - h]) {
                                vet[j] = vet[j - h];
                                j = j - h;
                        }
                        vet[j] = valor;
                }
                h /= 3;
        }

        print(vet);

}

void print(int *vet) {

        printf("Ordenado de forma decrescente:\n");
        for (int i = 0; i < 100; i++) {
                printf("%d\n", vet[i]);
        }
}
