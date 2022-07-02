#include <stdio.h>

void data(int *dia, int *mes, int *ano);

int main(int argc, char const *argv[]) {

        int ano, dia, mes;

        scanf("%d%d%d", &dia, &mes, &ano);

        data(&dia, &mes, &ano);

        return 0;
}

void data(int *dia, int *mes, int *ano) {

        if (*mes == 2 &&  *dia > 28)
                printf("Data invalida");
        else if ((*dia >= 1 && *dia <= 31) && (*mes >= 1 && *mes <= 12)) {
                printf("%d de ", *dia);

                if (*mes == 01) {
                        printf("janeiro de ");
                }else if (*mes == 2) {
                        printf("fevereiro de ");
                }else if (*mes == 3) {
                        printf("março de ");
                }else if (*mes == 4) {
                        printf("abril de ");
                }else if (*mes == 5) {
                        printf("maio de ");
                }else if (*mes == 6) {
                        printf("junho de ");
                }else if (*mes == 7) {
                        printf("julho de ");
                }else if (*mes == 8) {
                        printf("agosto de ");
                }else if (*mes == 9) {
                        printf("setembro de ");
                }else if (*mes == 10) {
                        printf("outubro de ");
                }else if (*mes == 11) {
                        printf("novembro de ");
                }else if (*mes == 12) {
                        printf("dezembro de ");
                }
                printf("%d\n", *ano);
        }else {
                printf("Data invalida!\n");
        }

}
