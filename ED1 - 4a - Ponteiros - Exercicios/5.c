#include <stdio.h>

void troca(int *num, int *num1);

int main(int argc, char const *argv[]) {

        int num, num1;

        scanf("%d %d", &num, &num1);

        troca(&num, &num1);

        printf("%d %d\n", num, num1);

        return 0;
}

void troca(int *num, int *num1) {
        int aux;

        aux = *num;
        *num = *num1;
        *num1 = aux;
}
