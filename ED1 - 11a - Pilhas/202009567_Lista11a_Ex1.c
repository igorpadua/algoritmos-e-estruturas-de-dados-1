#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char palavra[20], pal[50];
	int tam;
	
	printf("Digite uma palavra:\n");	
	scanf("%s", palavra);

	printf("Empilhando...\n");
	tam = strlen(palavra);

	for (int i = 0; i < tam; ++i) {
		pal[i] = palavra[i];	
		printf(" <- %c", palavra[i]);
	}

	printf("\nDesempilhando...\n");

	for (int i = tam - 1; i >= 0; i--) {
		printf("%c ->", pal[i]);
	}

	printf("\n");

	return 0;
}
