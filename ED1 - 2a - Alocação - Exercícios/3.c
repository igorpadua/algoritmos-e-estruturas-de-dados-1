#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

        void leitura_matriz(int *n, int *m, int **vetor);

        int **vetor, n, m;

        scanf("%d %d", &n, &m);

        vetor =(int**) malloc(1000 * sizeof(int));

        leitura_matriz(&n, &m, vetor);

        free(vetor);

        return 0;
}

void leitura_matriz(int *n, int *m, int **vetor) {

        void impressao(int *n, int *m, int **vetor);

        for (int i = 0; i < *n; i++) {
                vetor[i] =(int*) malloc(1000 * sizeof(int));
                for (int j = 0; j < *m; j++) {
                        scanf("%d", &vetor[i][j]);
                }
        }

        impressao(n, m, vetor);

}

void impressao(int *n, int *m, int **vetor) {

        for (int i = 0; i < *n; i++) {
                for (int j = 0; j < *m; j++) {
                        printf("%d ", vetor[i][j]);
                }
                puts("");
        }

}
