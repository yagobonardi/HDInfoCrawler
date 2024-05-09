#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    FILE *file = fopen("HDFile.txt", "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    } else {
		printf("Arquivo aberto.\n");
	}

    char linha[1000];
    while (fgets(linha, sizeof(linha), file)) {
        if (strstr(linha, "Hard Disk Model ID") != NULL) {
            printf("%s", linha);
			printf("\n");
        } else if (strstr(linha, "Hard Disk Serial Number") != NULL) {
			printf("%s", linha);
			printf("\n");
		} else if (strstr(linha, "Power On Time") != NULL) {
			printf("%s", linha);
			printf("\n");
		} else if (strstr(linha, "Health") != NULL) {
			printf("%s", linha);
			printf("\n");
		} else if (strstr(linha, "Performance") != NULL) {
			printf("%s", linha);
			printf("\n");
		} else if (strstr(linha, "Bytes Per Sector") != NULL) {
			printf("%s", linha);
			printf("\n");
		} 
    }

    fclose(file);
    return 0;
}
