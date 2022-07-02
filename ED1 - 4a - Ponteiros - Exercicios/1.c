#include <stdio.h>
#include <string.h>

int string(char *s1, char *s2);

int main() {
        char s1[20];
        char s2[20];
        int x;

        printf("Digite uma string : ");
        scanf("%s", s1);
        printf("Digite outra string : ");
        scanf("%s", s2);

        x = string(s1, s2);

        printf("Está na posição: %d\n", x);
}

int string(char *s1, char *s2) {

        int tam = strlen(s1);
        int tam1 = strlen(s2);
        int x = 0;

        for (int i = 0; i < tam; i++) {
                for (int j = 0; j < tam1; j++) {
                        if (s1[i] == s2[j]) {
                                return i;
                        }
                }
        }

        return -1;
}
