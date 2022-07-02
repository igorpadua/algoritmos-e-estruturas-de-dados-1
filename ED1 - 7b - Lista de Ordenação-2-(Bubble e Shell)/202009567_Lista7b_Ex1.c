#include <stdio.h>

void bublesort(int vetor[], int tam);
void print(int vetor[], int tam);

int main(int argc, char const *argv[]) {

        int vet[5];
        
        for (int i = 0; i < 5; i++) {
                printf("Digite o valor %d do vetor:\n", i);
                scanf("%d", &vet[i]);
                // getchar();
        }

        bublesort(vet, 5);

        return 0;
}

void bublesort(int vetor[], int tam) {

        int aux, sinal;

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

        print(vetor, tam);

}

void print(int vetor[], int tam) {

        printf("Vetor organizado: ");

        for (int i = 0; i < tam; i++) {
                printf("%d ", vetor[i]);
        }

}
