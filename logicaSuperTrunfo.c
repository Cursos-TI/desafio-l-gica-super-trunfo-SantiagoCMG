#include <stdio.h>

typedef struct {
    char nomeEstado[50];
    char codigo[10];
    long populacao;      // habitantes
    float area;          // km²
    float pib;           // bilhões
    int pontosTuristicos;
} Estado;

float calcularDensidade(Estado e) {
    return e.populacao / e.area;
}

int main() {

    Estado e1, e2;
    int atributo1, atributo2;

    // Cadastro do primeiro estado
    printf("Cadastro do primeiro estado\n");
    printf("Nome do estado: ");
    scanf(" %[^\n]", e1.nomeEstado);

    printf("Codigo da carta: ");
    scanf("%s", e1.codigo);

    printf("Populacao: ");
    scanf("%ld", &e1.populacao);

    printf("Area (km²): ");
    scanf("%f", &e1.area);

    printf("PIB (bilhoes): ");
    scanf("%f", &e1.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &e1.pontosTuristicos);

    // Cadastro do segundo estado
    printf("\nCadastro do segundo estado\n");
    printf("Nome do estado: ");
    scanf(" %[^\n]", e2.nomeEstado);

    printf("Codigo da carta: ");
    scanf("%s", e2.codigo);

    printf("Populacao: ");
    scanf("%ld", &e2.populacao);

    printf("Area (km²): ");
    scanf("%f", &e2.area);

    printf("PIB (bilhoes): ");
    scanf("%f", &e2.pib);

    printf("Pontos turisticos: ");
    scanf("%d", &e2.pontosTuristicos);

    // Menu
    printf("\nEscolha o PRIMEIRO atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo para comparacao:\n");
    scanf("%d", &atributo2);

    float score1 = 0, score2 = 0;

    // Função interna de comparação
    int comparar(int attr) {
        switch (attr) {
            case 1:
                return (e1.populacao > e2.populacao) ? 1 :
                       (e1.populacao < e2.populacao) ? 2 : 0;
            case 2:
                return (e1.area > e2.area) ? 1 :
                       (e1.area < e2.area) ? 2 : 0;
            case 3:
                return (e1.pib > e2.pib) ? 1 :
                       (e1.pib < e2.pib) ? 2 : 0;
            case 4:
                return (e1.pontosTuristicos > e2.pontosTuristicos) ? 1 :
                       (e1.pontosTuristicos < e2.pontosTuristicos) ? 2 : 0;
            case 5: {
                float d1 = calcularDensidade(e1);
                float d2 = calcularDensidade(e2);
                return (d1 < d2) ? 1 :
                       (d1 > d2) ? 2 : 0;
            }
            default:
                return 0;
        }
    }

    int r1 = comparar(atributo1);
    int r2 = comparar(atributo2);

    score1 += (r1 == 1);
    score2 += (r1 == 2);
    score1 += (r2 == 1);
    score2 += (r2 == 2);

    printf("\nResultado Final\n");
    printf("%s: %.0f pontos\n", e1.nomeEstado, score1);
    printf("%s: %.0f pontos\n", e2.nomeEstado, score2);

    if (score1 > score2)
        printf("VENCEDOR: %s\n", e1.nomeEstado);
    else if (score2 > score1)
        printf("VENCEDOR: %s\n", e2.nomeEstado);
    else
        printf("EMPATE!\n");

    return 0;
}
