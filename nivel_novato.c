#include <stdio.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_COR 20
#define QTD_TERRITORIOS 5

typedef struct {
    char nome[TAM_NOME];
    char cor[TAM_COR];
    int tropas;
} Territorio;

int main() {
    Territorio territorios[QTD_TERRITORIOS];

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, TAM_NOME, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor: ");
        fgets(territorios[i].cor, TAM_COR, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar();
    }

    printf("\n=== Territórios cadastrados ===\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}