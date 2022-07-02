#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

        void troca(int *x, int *y);

        int n1, n2;

        scanf("%d %d", &n1, &n2);

        troca(&n1, &n2);

        printf("%d %d\n", n1, n2);

        return 0;
}

void troca(int *x, int *y) {
        int a;

        a = *x;
        *x = *y;
        *y = a;
        for (int i = 0; i < 5; i++) {
                a = i;
        }
        
}

