#include <stdio.h>

int main()
{
    int opcao = 0;
    float num[10];
    while (opcao != 5)
    {
        printf("\nCALCULADORA\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair do programa\n\nEscolha um opcao: ");
        scanf("%i", &opcao);
        switch (opcao)
            {
            case 1:
                printf("\nDigite um numero: ");
                scanf("%f", &num[0]);
                printf("Digite outro numero: ");
                scanf("%f", &num[1]);
                printf("\nsoma: %.2f\n", num[0] + num[1]);
                break;
            case 2:
                printf("\nDigite um numero: ");
                scanf("%f", &num[0]);
                printf("Digite outro numero: ");
                scanf("%f", &num[1]);
                printf("\nsubtracao: %.2f\n", num[0] - num[1]);
                break;
            case 3:
                printf("\nDigite um numero: ");
                scanf("%f", &num[0]);
                printf("Digite outro numero: ");
                scanf("%f", &num[1]);
                printf("\nmultiplicacao: %.2f\n", num[0] * num[1]);
                break;
            case 4:
                printf("\nDigite um numero: ");
                scanf("%f", &num[0]);
                printf("Digite outro numero: ");
                scanf("%f", &num[1]);
                if (num[1] == 0){
                    printf("\nNao e possivel fazer divisao por zero!\n");
                    }
                else{
                    printf("\ndivisao: %.2f\n", num[0] / num[1]);
                    }
                break;
            case 5:
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
            }
    }
    
    return 0;
}
