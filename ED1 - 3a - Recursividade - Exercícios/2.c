#include <stdio.h>

// Funções:
float elevar(float x, int n);

int main(int argc, char const *argv[]) {

        float base, resul;
        int expoente;

        scanf("%f %d", &base, &expoente);

        resul = elevar(base, expoente);
        printf("%.2f elevado a %d resulta em %.2f.\n", base, expoente, resul);

        return 0;
}

float elevar(float x, int n) {

        if (n == 0) {
                return (1);
        }else {
                return (x * elevar(x, n - 1));
        }

}
