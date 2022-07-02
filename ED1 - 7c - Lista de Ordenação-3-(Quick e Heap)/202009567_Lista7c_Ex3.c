#include <stdio.h>
#include <string.h>

void ordem(char vet[6][10], int began, int tam);

int main(int argc, char *argv[]) {

        char vet[6][10] = {"Igor", "Diego", "Ana", "Beatriz", "Sand", "Moreira"};

        printf("\nNão ordenado:\n");
        for (int i = 0; i < 6; i++) {
                printf("%s\n", vet[i]);
        }
        ordem(vet, 0, 6);

        printf("\nOrdenado:\n");

        for (int i = 0; i < 6; i++) {
                printf("%s\n", vet[i]);
        }

        printf("\n");

        return 0;
}

void ordem(char vet[6][10], int began, int tam) {

        int i, j, pivo;
	char aux[50];

        i = began;
        j = tam - 1;
        pivo = vet[(began + tam) / 2][0];

        while (i <= j) {
                while (vet[i][0] < pivo && i < tam) {
                        i++;
                }
                while (vet[j][0] > pivo && j > began) {
                        j--;
                }
                if (i <= j) {
                        strcpy(aux, vet[i]);
			strcpy(vet[i], vet[j]);
			strcpy(vet[j], aux);
                        i++;
                        j--;
                }
        }
        if (j > began) {
                ordem(vet, began, j + 1);
        }
        if (i < tam) {
                ordem(vet, i, tam);
        }
}
