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
void excluir(int num);

int main(int argc, char *argv[]) {

        prim = NULL;
	int remover;

        for (int i = 0; i < qtd; ++i) {
                inserir(i + 10);
        }

        printf("\n");
        p = prim;

        for (int i = 0; i < qtd; ++i) {
                imprime();
        }

        printf("\n");

	printf("Qual valor você quer remover?\n");
	scanf("%d", &remover);
	excluir(remover);

        printf("\n");

	p = prim;

        for (int i = 0; i < qtd - 1; ++i) {
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

        printf("%d-", p->num);
        p = p->link;
} 

void excluir(int num) {
	p = prim;

	while (p != NULL) {
		if (p->num == num) {
			q->link = p->link;
			free(p);
		}
		q = p;
		p = p->link;
	}
}
