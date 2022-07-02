#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct no {
	char palavra[20];
	struct no *link;
} pilha;

pilha *p, *q, *topo;
int j;

int main(int argc, char *argv[]) {
	
	char pala[20];
	int tam, x;
	
	p = NULL;
	q = NULL;
	topo = NULL;

	printf("Digite uma palavra:\n");
	scanf("%s", pala);

	tam = strlen(pala);

	printf("Empilhando...\n");
	for (int i = 0; i < tam; i++) {
		p = (pilha *) malloc(sizeof(pilha));
		p->palavra[i] = pala[i];
		p->link = q;
		topo = p;
		q = p;
		printf(" <- %c", p->palavra[i]);
	}
	printf("\n");

	printf("\nDesempilhando...\n");
	p = topo;

	x = tam - 1;
	while (p != NULL) {
		printf(" %c -> ", p->palavra[x]);
		p = p->link;
		x--;
	}
	printf("\n");

	return 0;
}
