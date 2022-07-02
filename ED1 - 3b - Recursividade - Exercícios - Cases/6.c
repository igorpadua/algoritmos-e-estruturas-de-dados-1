#include <stdio.h>

float raiz(float n, int x, float y);

int main(int argc, char const *argv[]) {

        float num, resul;

        scanf("%f", &num);

        resul = raiz(num, 10, num);

        printf("A raiz quadrada é: %f\n", resul);

        return 0;
}

float raiz(float n, int x, float y) {

        if (x == 0) {
                return y;
        }

        y = y / 2 + n / (2 * y);

        return raiz(n, x - 1, y);
}
