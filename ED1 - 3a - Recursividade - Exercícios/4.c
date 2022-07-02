#include <stdio.h>

int maior(int v[], int i, int m);

int main(int argc, char const *argv[]) {

        int vet[] = {1, 2, 3, 4, 5, 6, 7};
        int resul;

        resul = maior(vet, 6, 0);

        printf("Maior valor: %d\n", resul);

        return 0;
}

int maior(int v[], int i, int m) {

        if (i < 0) {
                return m;
        } else if (v[i] > m) {
                m = v[i];
        }

        return maior(v, i-1, m);
}
