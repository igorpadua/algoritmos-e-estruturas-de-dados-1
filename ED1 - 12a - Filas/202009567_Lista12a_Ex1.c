#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	char nome[50];
	int data;
	struct no *link;
} fila;

fila *p, *q, *ini, *fim;

void colocando();
void retirando();

int main(int argc, char *argv[]) {
	
	int escolha, sair = 0;
	p = NULL;
	q = NULL;
	ini = NULL;

	while (sair != 1) {
		printf("O que você quer fazer:\n");
		printf("1.Adicionar\n");
		printf("2.Remover\n");
		printf("3.Sair\n");
		scanf("%d", &escolha);
		getchar();
		switch (escolha) {
			case 1:
				colocando();	
				break;
			case 2:
				retirando();
				break;
			default:
				sair = 1;
		}
	}

	return 0;
}

void colocando() {
	p = (fila*) malloc(sizeof(fila));
	p->link = NULL;
	printf("Nome do documento:\n");
	scanf("%[^\n]", p->nome);
	printf("Tempo necessário\n");
	scanf("%d", &p->data);
	if (q != NULL) {
		q->link = p;
	}
	fim = p;
	if (ini == NULL) {
		ini = p;
	}
	q = p;
}

void retirando() {
	p = ini;
	while (p != NULL) {
		printf("%s ", p->nome);
		printf("%d ->", p->data);
		p = p->link;
	}
	printf("\n");
}
