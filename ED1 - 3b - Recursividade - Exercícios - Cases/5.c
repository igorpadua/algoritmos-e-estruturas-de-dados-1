#include <stdio.h>

int mdc(int num1, int num2);

int main(int argc, char const *argv[]) {

        int num1, num2;
        int resul;

        scanf("%d %d", &num1, &num2);

        resul = mdc(num1, num2);

        printf("O máximo divisor comum: %d\n", resul);

        return 0;
}

int mdc(int num1, int num2) {

        if (num1 == num2) {
                return num1;
        }else if (num1 > num2) {
                return mdc(num1 - num2, num2);
        }

        return mdc(num2, num1);
}
