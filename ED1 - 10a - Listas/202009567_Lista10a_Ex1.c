#include <stdio.h>

int adicionar(int lista[10][2], int posi);
void dados(int lista[10][2]);
void inicar(int lista[10][2]);
void prox(int lista[10][2]);
void remover(int lista[10][2], int posi);

int main(int argc, char *argv[]) {
	
	int lista[10][2];
	int sair = 0, escolha, poiscao;

	printf("1. Adicionar elemento\n");
	printf("2. Removerar elemento\n");
	printf("3. Exibir elemento\n");
	printf("4. Sair\n");

	inicar(lista);

	while (sair != 1) {

		printf("O que você quer fazer?\n");
		scanf("%d", &escolha);

		switch (escolha) {
			case 1:
				
				printf("\nAonde você quer adicionar o novo elemento\n");
				scanf("%d", &poiscao);
				poiscao--;
				adicionar(lista, poiscao);
				prox(lista);
				printf("\n");

				break;
			case 2:
	
				printf("\nAonde você quer remover um elemento\n");
				scanf("%d", &poiscao);
				poiscao--;
				remover(lista, poiscao);
				prox(lista);
				printf("\n");

				break;
			case 3: 

				printf("\n");
				dados(lista);
				printf("\n");

				break;
			default:
				sair = 1;
		}
	}

	return 0;
}

int adicionar(int lista[10][2], int posi) {

	if (lista[posi][2] != 0) {
		printf("Já exite!!!\n");
		return -1;
	}

	printf("\nDigite um número:\n");	
	scanf("%d", &lista[posi][0]);

	printf("\nAdicionado!!!\n");
	
	return 0;
}

void dados(int lista[10][2]) {

	for (int i = 0; i < 10; ++i) {
		printf("Elemento %d, Número %d, próximo: %d\n", i + 1, lista[i][0], lista[i][1]);
	}

}

void inicar(int lista[10][2]) {

	for (int i = 0; i < 10; ++i) {
		lista[i][0] = 0;
		lista[i][1] = 0;
	}
}

void prox(int lista[10][2]) {

	for (int i = 0; i < 9; ++i) {
		lista[i][1] = lista[i + 1][0]; 
	}
}

void remover(int lista[10][2], int posi) {

	lista[posi][0] = 0;
}
