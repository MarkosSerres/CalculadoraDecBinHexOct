#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char VALOR[100];


int Recebe()
{
    VALOR[0] = 0;
    printf("Digite o seu valor:");
    scanf(" %s", &VALOR);
    //printf("%s", VALOR);
    return 0;
}

int Menu2()
{
    int MENU2;
    printf("Para qual tipo de valor deseja transformar?\n");
    printf("1 - Valor Decimal\n");
    printf("2 - Valor Binário\n");
    printf("3 - Valor Hexadecimal\n");
    printf("4 - Valor Octal\n");
    scanf("%d", &MENU2);

    switch (MENU2) {
        case 1:
            printf("%s\n", &VALOR);
            break;
        case 2:
             int binario[32];
             int i = 0;

             if (VALOR == 0) {
        printf("Binario: 0\n");
        return;
        }

        while (VALOR > 0) {
        binario[i] = VALOR % 2;
        VALOR = VALOR / 2;
        i++;
    }

    printf("Binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

            break;
        case 3:
            printf("VALOR HEXADECIMAL\n");
            break;
        case 4:
            printf("VALOR OCTAL\n");
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}


int main()
{
    int MENU;
    printf("Escolha o tipo do seu valor:\n");
    printf("1 - Valor Decimal\n");
    printf("2 - Valor Binário\n");
    printf("3 - Valor Hexadecimal\n");
    printf("4 - Valor Octal\n");
    scanf("%d", &MENU);

    switch (MENU) {
        case 1:
            printf("VALOR DECIMAL\n");
            Recebe();
            Menu2();
            break;
        case 2:
            printf("VALOR BINÁRIO\n");
            Recebe();
           // Menu2();
            break;
        case 3:
            printf("VALOR HEXADECIMAL\n");
            Recebe();
           // Menu2();
            break;
        case 4:
            printf("VALOR OCTAL\n");
            Recebe();
           // Menu2();
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}
