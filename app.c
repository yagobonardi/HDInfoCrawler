#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("HDFile.txt", "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    } 
	else {
		printf("Arquivo aberto.\n");
	}

    char linha[1000];
	char *lista[] = {"Hard Disk Model ID", "Hard Disk Serial Number", "Power On Time", "Health", "Performance", "Bytes Per Sector" }

    while (fgets(linha, sizeof(linha), file)) {
		for (int i = 0; i < sizeof(lista); i++) {
			if (strstr(linha, lista[i]) != NULL) {
				printf("%s\n", linha);
			}
		}
    }

    fclose(file);
    return 0;
}
