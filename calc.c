#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    char operacao;
    int menu;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1: Soma \n");
        printf("2: Subtracao \n");
        printf("3: Multiplicacao \n");
        printf("4: Divisao \n");
        printf("0: Sair\n");
        scanf("%d", &menu);

        if (menu == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        printf("Digite um valor: ");
        scanf("%f", &num1);
        printf("Digite a opercao (+, -, *, /): ");
        scanf(" %c", &operacao);
        printf("Digite outro valor: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                    continue;
                }
                break;
            default:
                printf("Operacao inválida!\n");
                break;
        }
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &operacao);

        if (operacao != 's' && operacao != 'S') {
            break;
        }

    } while (1);

    return 0;
    
}

