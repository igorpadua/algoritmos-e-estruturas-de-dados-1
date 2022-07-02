#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int info;
	struct no *link;
} pilha;

pilha *p, *q, *topo;
int j = 0;

int main(int argc, char *argv[]) {
	
	int num = 0;
	p = NULL;
	q = NULL;	
	topo = NULL;
	
	printf("Digite o número do tombo:\n");	
	
	while (num != -1) {
	
		scanf("%d", &num);

		if (num == -1) {
			break;
		}

		p = (pilha*) malloc(sizeof(pilha));
		
		p->info = num;
		p->link = q;
		topo = p;
		q = p;
		j++;
	}

	p = topo;

	printf("Pilha: ");
	while (p != NULL) {
		printf("%d -> ", p->info);
		p = p->link;
	}

	printf("\n");

	printf("Apartir de que número você quer eliminar:\n");
	scanf("%d", &num);

	p = topo;

	while (p != NULL) {
		if (num == p->info) {
			free(p);
			p->link = NULL;
			j--;
			break;
		} else {
			p = p->link;
		}
	}
	
	p = topo;

	printf("Pilha: ");
	int x = 0;
	while (x != j - 1) {
		printf("%d -> ", p->info);
		p = p->link;
		x++;
	}

	printf("\n");

	return 0;
}
