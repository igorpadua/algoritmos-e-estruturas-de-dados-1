#include <stdio.h>

// Funções:
int fibo(int n);

int main(int argc, char const *argv[]) {

        int num, num1, num2, result;

        puts("Número:");
        scanf("%d", &num);

        result = fibo(num);

        printf("Resultado: %d\n", result);

        return 0;
}

int fibo(int n) {

        if ((n == 1) || (n == 2)) {
                return (1);
        }else {
                return (fibo(n - 1) + fibo(n - 2));
        }

}
