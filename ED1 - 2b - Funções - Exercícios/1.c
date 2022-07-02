#include <stdio.h>

// Funções:
int fatorial(int x);
void equacao(int x);
double elevado(int x, int r);

// Variável global:
double y = 1;

int main(int argc, char const *argv[]) {

        int x;

        scanf("%d", &x);

        equacao(x);

        return 0;
}

void equacao(int x) {

        for (int i = 0; i < x; i++) {
                y += i * (elevado(x, i + 1)) / fatorial(i + 1);
        }

        printf("%.2lf\n", y);

}

int fatorial(int x) {

        int q = 1;

        while (x != 0) {
                q = q * x--;
        }

        return q;
}

double elevado(int x, int r) {

        double a = 1;

        for (int i = 0; i < r; i++) {
                a *= x;
        }

        return a;
}
