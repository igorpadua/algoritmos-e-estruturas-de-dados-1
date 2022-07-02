#include <stdio.h>

int hanoi(int d, int x);

int main(int argc, char const *argv[]) {

        int disco, resul;

        scanf("%d", &disco);

        resul = hanoi(disco, 2);

        printf("Vai ser preciso de %d movimentos.\n", resul);

        return 0;
}

int hanoi(int d, int x) {

        if (d == 1) {
                x -= 1;
                return x;
        }

        return hanoi(d-1, x*2);
}
