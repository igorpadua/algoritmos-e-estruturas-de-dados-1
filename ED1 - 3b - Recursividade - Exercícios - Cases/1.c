#include <stdio.h>
#include <string.h>

int procura(char st[], int n, char c, int tam);

int main(int argc, char const *argv[]) {

        char string[100];
        char caract;
        int tam;

        scanf("%[^\n] %c", string, &caract);

        tam = procura(string, strlen(string), caract, 0);

        printf("Repetição do caracter %c é %d\n", caract, tam);

        return 0;
}

int procura(char st[], int n, char c, int tam) {

        if (n < 0) {
                return tam;
        }

        if (st[n] == c) {
                tam++;
        }

        return procura(st, n-1, c, tam);
}
