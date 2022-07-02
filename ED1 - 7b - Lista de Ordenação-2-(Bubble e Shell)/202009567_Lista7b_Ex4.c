#include <stdio.h>

void shellsort(int vet[], int tam);
void print(int *vet);

int main(int argc, char const *argv[]) {

        int vet[] = {12, 42, 1, 6, 56, 23, 52, 9, 5, 24};

        shellsort(vet, 10);

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
                        while (j > h - 1  && valor <= vet[j - h]) {
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

        printf("Ordenado: ");
        for (int i = 0; i < 10; i++) {
                printf("%d ", vet[i]);
        }
}
