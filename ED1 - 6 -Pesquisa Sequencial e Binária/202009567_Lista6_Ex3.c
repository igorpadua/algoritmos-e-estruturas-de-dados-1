#include <stdio.h>

int *sequencial(int vet[], int tam, int chave);
int binario(int vet[], int tam, int item);

int num[2];
int num2[2];

int main(int argc, char *argv[]) {

        int vet1[] = {2, 7, 11, 33, 54, 85, 90, 90};
        int vet2[] = {2, 7, 11, 33, 54, 85, 90, 90};

        sequencial(vet1, 8, 90);
        binario(vet2, 8, 90);

        printf("Vetor: ");
        for (int i = 0; i < 8; ++i) {
                printf("%d ", vet1[i]);
        }

        printf("\n");

        for (int i = 0; i < 2; ++i) {
                printf("\nSequncial %d° posição = %d\n", i+1, num[i]);
                printf("Binario %d° posição= %d\n", i+1, num2[i]);
        }


        return 0;
}

int *sequencial(int vet[], int tam, int chave) {

        int i = 0, k = 0;


        while (i < tam) {
                i++;
                if (vet[i] == chave) {
                        num[k++] = i;
                }
        }

        if (i < tam) {
                return num;
        } else {
                return 0;
        }
}

int binario(int vet[], int tam, int item) {

        int begin = 0;
        int end = tam - 1;
        int i = 0, k = 0;

        while (begin <= end) {
                i = (begin + end) / 2;

                if (vet[i] == item) {
                        printf("%d\n", i);

                        num2[k++] = i;
                        if (begin == end) {
                                return i;
                        }
                }

                if (vet[i] <= item) {
                        begin = i + 1;
                } else {
                        end = 1;
                }
        }
        return -1;
}
