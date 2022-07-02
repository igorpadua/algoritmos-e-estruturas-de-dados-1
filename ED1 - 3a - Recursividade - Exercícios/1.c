#include <stdio.h>
#include <string.h>

char *inverte(char f[], int n, char fr[], int q);

int main(int argc, char const *argv[]) {

        char frase[1000];
        char frase2[1000];
        char *frase1;
        int tam;

        scanf("%[^\n]", frase);

        tam = strlen(frase);

        frase1 = inverte(frase, tam - 1, frase2, 0);

        printf("Invertido:\n%s\n", frase1);

        return 0;
}

char *inverte(char f[], int n, char fr[], int q) {

        if (n < 0) {
                fr[q] ='\0';
                return fr;
        }

        fr[q] = f[n];

        return inverte(f, n-1, fr, q+1);
}
