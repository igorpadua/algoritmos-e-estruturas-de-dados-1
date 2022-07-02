#include <stdio.h>
#include <stdlib.h>

typedef struct no {
        int num;
        struct no *link;
} lista;

lista *p, *q, *prim;
int qtd;

void inserir(int num);
void imprime();

int main(int argc, char *argv[]) {

        prim = NULL;
	int termo;

	printf("Quantos termos você quer adicionar?\n");
	scanf("%d", &qtd);
        printf("\n");

        for (int i = 0; i < qtd; ++i) {
		printf("%d° Termo:\n", i + 1);
		scanf("%d", &termo);
                inserir(termo);
        }

        printf("\n");
        p = prim;

	printf("Todos os termos:\n");
        for (int i = 0; i < qtd; ++i) {
                imprime();
        }

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

        printf("%d ", p->num);
        p = p->link;
}
