#include <stdio.h>

int num_primo(int n){
    int i;
    for (i=2;i<n;i=i+1){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int v_num[5];
    int i;
    printf("Informe 15 numeros para o programa\n");
    for (i=0; i<5; i++){
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &v_num[i]);
    }
    int cont_primo = 0;
    int v_primo[1];
    for (i=0; i<5; i++){
        if (num_primo(v_num[i]) == 1){
            v_primo[cont_primo - (cont_primo)] = v_num[i];
            cont_primo = cont_primo + 1;
        }
    }
    for (i=0; i<cont_primo; i++){
        printf("\nO numero %d e primo", v_primo[i]);
    }
}
