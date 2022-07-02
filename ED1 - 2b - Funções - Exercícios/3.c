#include <stdio.h>

// Função:
void funcao(double n);
int fatorial(int x);

int main(int argc, char const *argv[]) {

        double n;

        scanf("%lf", &n);

        funcao(n);

        return 0;
}

void funcao(double n) {

        double resul = 0;

        for (int i = 0; i < n; i++) {
                resul += 1.0 / fatorial(n);
        }

        printf("%.2lf\n", resul);

}

int fatorial(int n) {

        int q = 1;

        while (n != 0) {
                q = q * n--;
        }

        return q;
}
