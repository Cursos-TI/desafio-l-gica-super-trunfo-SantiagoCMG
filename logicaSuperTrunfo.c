#include <stdio.h>

typedef struct {
    char nomeEstado[50];
    char codigo[10];
    int populacao;          // em milhões
    float area;             // em mil km²
    float pib;              // em trilhões
    int pontosTuristicos;
} Estado;

int main() {

    Estado rj = {"Rio de Janeiro", "RJ", 17, 43.7, 1.1, 120};
    Estado sp = {"Sao Paulo", "SP", 46, 248.2, 3.4, 180};

    int opcao;
    do {
        printf("Escolha o atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        printf("\nComparando %s vs %s\n\n", rj.nomeEstado, sp.nomeEstado);

        switch (opcao) {

            case 1:
                printf("Populacao (milhoes):\n");
                printf("%s: %d\n", rj.nomeEstado, rj.populacao);
                printf("%s: %d\n", sp.nomeEstado, sp.populacao);

                if (sp.populacao > rj.populacao)
                    printf("Vencedor: %s\n", sp.nomeEstado);
                else
                    printf("Vencedor: %s\n", rj.nomeEstado);
                break;

            case 2:
                printf("Area (mil km2):\n");
                printf("%s: %.2f\n", rj.nomeEstado, rj.area);
                printf("%s: %.2f\n", sp.nomeEstado, sp.area);

                if (sp.area > rj.area)
                    printf("Vencedor: %s\n", sp.nomeEstado);
                else
                    printf("Vencedor: %s\n", rj.nomeEstado);
                break;

            case 3:
                printf("PIB (trilhoes):\n");
                printf("%s: %.2f\n", rj.nomeEstado, rj.pib);
                printf("%s: %.2f\n", sp.nomeEstado, sp.pib);

                if (sp.pib > rj.pib)
                    printf("Vencedor: %s\n", sp.nomeEstado);
                else
                    printf("Vencedor: %s\n", rj.nomeEstado);
                break;

            case 4:
                printf("Pontos Turisticos:\n");
                printf("%s: %d\n", rj.nomeEstado, rj.pontosTuristicos);
                printf("%s: %d\n", sp.nomeEstado, sp.pontosTuristicos);

                if (sp.pontosTuristicos > rj.pontosTuristicos)
                    printf("Vencedor: %s\n", sp.nomeEstado);
                else
                    printf("Vencedor: %s\n", rj.nomeEstado);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while (opcao != 0);

    return 0;
}
