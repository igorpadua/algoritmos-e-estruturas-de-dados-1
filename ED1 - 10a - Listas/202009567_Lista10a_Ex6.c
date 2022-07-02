#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Elemento {
	int info;
	struct Elemento *prox;
} TElemento;

typedef struct Lista {
	TElemento *inicio;
	TElemento *fim;
} TLista;

void inicializar_lista(TLista *lista);
void inserir_elemento(TLista *lista);
void apresentar_elementos(TLista *lista);
void excluir_elementos(TLista *lista);
void excluir_posicao(TLista *lista);

int main(int argc, char *argv[]) {

	TLista L1;
	int opcao;
	inicializar_lista(&L1);

	do {
		printf("\n1. Inserir novo elemento;\n");
		printf("2. Listar todos os elementos\n");
		printf("3. Excluir elemento\n");
		printf("4. Excluir poisição\n");
		printf("5. Para sair\n");
		printf("Entre com a sua opção:\n");
		scanf("%d", &opcao);
		switch (opcao) {
			case 1:
				inserir_elemento(&L1);		
				break;
			case 2:
				apresentar_elementos(&L1);
				break;
			case 3:
				excluir_elementos(&L1);
				break;
			case 4:
				excluir_posicao(&L1);
				break;
			default:
				opcao = 0;	
		}
	} while (opcao != 0);

	return 0;
}

void inicializar_lista(TLista *lista) {
	lista->inicio = NULL;
	lista->fim = NULL;
}

void inserir_elemento(TLista *lista) {
	TElemento *novo;
	novo = (TElemento*) malloc(sizeof(TElemento));

	printf("\nInforme o valor: \n");
	scanf("%d", &novo->info);
	novo->prox = NULL;

	if (lista->inicio == NULL) {
		lista->inicio = novo;
	} else {
		lista->fim->prox = novo;
	}
	lista->fim = novo;
	novo->prox = lista->inicio;
}

void apresentar_elementos(TLista *lista) {
	TElemento *aux;

	printf("\n");
	if (lista->inicio == NULL) {
		printf("Lista vazia!\n");
	} else {
		aux = lista->inicio;
		do {
			printf("Valor = %d\n", aux->info);
			aux = aux->prox;
		} while (aux != lista->inicio);
	}
}

void excluir_elementos(TLista *lista) {
	int valor;
	TElemento *anterior, *atual;

	printf("Informe elemento a ser excluido:\n");
	scanf("%d", &valor);

	if (lista->inicio == NULL) {
		printf("Lista vazia!\n");
	} else {
		anterior = lista->inicio;
		atual = lista->inicio;
		do {
			if (atual->info == valor) {
				if (atual == lista->inicio) {
					lista->inicio = lista->inicio->prox;
					lista->fim->prox = atual->prox;
					free(atual);
					break;
				} else {
					if (atual == lista->fim) {
						lista->fim = anterior;
					}

					anterior->prox = atual->prox;
					free(atual);
					break;
				}
			} else {
				anterior = atual;
				atual = atual->prox;
			}
		} while (atual != lista->inicio);
	}
}

void excluir_posicao(TLista *lista) {
	int valor, i = 0;
	TElemento *anterior, *atual;

	printf("Informe a poisição ser excluido:\n");
	scanf("%d", &valor);

	if (lista->inicio == NULL) {
		printf("Lista vazia!\n");
	} else {
		anterior = lista->inicio;
		atual = lista->inicio;
		do {
			if (i == valor) {
				if (atual == lista->inicio) {
					lista->inicio = lista->inicio->prox;
					lista->fim->prox = atual->prox;
					free(atual);
					break;
				} else {
					if (atual == lista->fim) {
						lista->fim = anterior;
					}

					anterior->prox = atual->prox;
					free(atual);
					break;
				}
			} else {
				anterior = atual;
				atual = atual->prox;
				i++;
			}
		} while (atual != lista->inicio);
	}
}

