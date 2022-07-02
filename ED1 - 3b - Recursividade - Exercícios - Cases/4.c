#include <stdio.h>
#define MAX 50

int *binario(int dec, int v[]);

int x = 0;

int main(int argc, char const *argv[]) {

        int decimal, bin[MAX];
        int *v;

        scanf("%d", &decimal);

        v = binario(decimal, bin);

        printf("Em binario o %d é: ", decimal);
        for (int i = x - 1; i >= 0; i--) {
                printf("%d", v[i]);
        }

        return 0;
}

int *binario(int dec, int v[]) {

        if (dec == 0) {
                return v;
        }

        v[x] = dec % 2;
        dec /= 2;
        x++;

        return binario(dec, v);
}
