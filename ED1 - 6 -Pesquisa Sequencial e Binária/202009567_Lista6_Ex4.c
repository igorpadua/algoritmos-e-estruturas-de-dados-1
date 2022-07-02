#include <stdio.h>
#include <stdlib.h>

typedef struct no {
        int num;
        struct no *link;
} lista;

lista *p, *q, *prim;
int qtd = 5;

void inserir(int num);
void imprime();
int sequencial(int chave);

int main(int argc, char *argv[]) {

        prim = NULL;
        int num;

        for (int i = 0; i < qtd; ++i) {
                inserir(64 + i);
        }

        printf("\n");
        p = prim;

        for (int i = 0; i < qtd; ++i) {
                imprime();
        }

        p = prim;
        num = sequencial(66);

        printf("\nPosição: %d\n", num);

        printf("\n");

        return 0;
}

void inserir(int num) {

        p = (lista*) malloc(sizeof(lista));
        p->num = num;
        if (prim == NULL) {
                prim = p;
        } else {
                q->link = p;
        }

        q = p;
}

void imprime() {

        printf("%d-", p->num);
        p = p->link;
}

int sequencial(int chave) {

        int i = 0, cont = 1;

        while (p != (struct no *)0 && p->num != chave) {
                i++;
                cont++;
                p = p->link;
        }

        if (i < qtd) {
                return cont;
        } else {
                return -1;
        }
}
