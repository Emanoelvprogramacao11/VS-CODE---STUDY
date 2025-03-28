#include <stdio.h>

int main() {
    char letra[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turista;

    printf("Entre A e H escolha um: ");
    scanf("%49s", letra); // Limited input size to avoid buffer overflow

    printf("O codigo da carta é: ");
    scanf("%49s", codigo); // Limited input size for 'codigo'

    printf("Qual a cidade: ");
    scanf("%49s", cidade); // Limited input size to avoid buffer overflow

    printf("Qual a populacao: ");
    scanf("%d", &populacao); // Correctly read integer input

    printf("Qual a area: ");
    scanf("%f", &area); // Correctly read float input

    printf("Qual o PIB: ");
    scanf("%f", &pib); // Correctly read float input

    printf("Numero de turistas: ");
    scanf("%d", &turista); // Correctly read integer input

    printf("Letra: %s - Código: %s\n", letra, codigo);
    printf("Cidade: %s - População: %d\n", cidade, populacao);
    printf("Área: %.2f - PIB: %.2f\n", area, pib);
    printf("Turistas: %d\n", turista);

    return 0;
}