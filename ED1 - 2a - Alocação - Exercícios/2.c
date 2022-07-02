#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

        int **vetor, n, m;

        scanf("%d %d", &n, &m);

        vetor =(int**) malloc(1000 * sizeof(int));

        for (int i = 0; i < n; i++) {
                vetor[i] =(int*) malloc(1000 * sizeof(int));
                for (int j = 0; j < m; j++) {
                        vetor[i][j] = rand();
                }
        }
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                        printf("%d ", vetor[i][j]);
                }
                puts("");
        }

        free(vetor);

        return 0;
}
