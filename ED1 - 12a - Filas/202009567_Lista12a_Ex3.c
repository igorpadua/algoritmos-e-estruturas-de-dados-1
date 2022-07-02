#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int ra;
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
	printf("Digite o número do RA\n");
	scanf("%d", &p->ra);
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
		printf("%d ->", p->ra);
		p = p->link;
	}
	printf("\n");
}
