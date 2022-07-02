#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

        int *vetor, n;

        scanf("%d", &n);

        vetor = (int*) malloc(1000 * sizeof(int));

        for (int i = 0; i < n; i++) {
                vetor[i] = rand();
        }

        for (int i = 0; i < n; i++) {
                printf("%d\n", vetor[i]);
        }

        free(vetor);

        return 0;
}
