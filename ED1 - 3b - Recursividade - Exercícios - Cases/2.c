#include <stdio.h>

int mmc(int num1, int num2, int resto, int d);

int main(int argc, char const *argv[]) {

        int num1, num2;
        int resul;

        scanf("%d %d", &num1, &num2);

        resul = mmc(num1, num2, 1, 1);

        printf("%d\n", resul);

        return 0;
}

int mmc(int num1, int num2, int resto, int d) {

        if (resto == 0) {
                return num1 * (d - 1);
        }

        resto = (num1 * d) % num2;

        return mmc(num1, num2, resto, d+1);
}
