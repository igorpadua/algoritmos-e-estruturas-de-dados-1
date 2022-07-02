#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int info;
	struct no *link;
} pilha;

pilha *p, *q, *topo;
int j;

int main(int argc, char *argv[]) {
	
	int num1, num2, operador;

	p = NULL;
	q = NULL;
	topo = NULL;

	printf("Digite dois números e um operador:\n");
	printf("+ = 1\n");
	printf("- = 2\n"); 
	printf("/ = 3\n"); 
	printf("* = 4\n"); 
	for (int i = 0; i < 3; ++i) {
		p = (pilha*) malloc(sizeof(pilha));
		scanf("%d", &p->info);
		p->link = q;
		topo = p;
		q = p;
	}

	
	p = topo;

	operador = p->info;

	p = p->link;

	num2 = p->info;

	p = p->link;
	num1 = p->info;

	switch (operador) {
		case 1:
			printf("%d\n", num1 + num2);
			break;
		case 2:
			printf("%d\n", num1 - num2);
			break;
		case 3:
			printf("%d\n", num1 / num2);
			break;
		case 4:
			printf("%d\n", num1 * num2);
			break;
		default:
			printf("Erro\n");
	}	

	return 0;
}
