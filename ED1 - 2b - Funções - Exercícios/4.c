#include <stdio.h>
#include <stdlib.h>

// Funções:
void funcao(int tam);

int main(int argc, char const *argv[]) {

        int i = 1 , tam;

        do {
                scanf("%d", &tam);
                printf("%d° Vetor:\n", i);
                funcao(tam);
                i++;
        } while(i != 6);

        return 0;
}

void funcao(int tam) {

        float *vet;
        vet = (float*) malloc(1000 * sizeof(float));

        for (int i = 0; i < tam; i++) {
                vet[i] = rand();
        }

        for (int i = 0; i < tam; i++) {
                printf("%.2lf\n", vet[i]);
        }

}
