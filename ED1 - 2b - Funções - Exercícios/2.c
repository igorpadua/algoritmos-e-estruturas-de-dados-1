#include <stdio.h>
#include <math.h>

// Funções:
double funcao(int n);

int main(int argc, char const *argv[]) {

        int n;

        scanf("%d", &n);

        printf("Função %.2lf\n", funcao(n));

        printf("SQRT: %.2lf\n", sqrt(n));

        if (funcao(n == sqrt(n))) {
                puts("São iguais");
        }else {
                puts("São diferentes");
        }

        return 0;
}

double funcao(int n) {

        double x = 1;

        for (int i = 0; i < 10; i++) {
                x = (x / 2) + (n / (2 * x));
        }

        return x;
}
