#include <stdio.h>

int main(){
    char nomes[6];
    float notas1[6];
    float notas2[6];
    int i;

    for (i=0; i<7;i=i+1){
        printf("\nDigite o nome do %d aluno: ", i);
        scanf("%c", &nomes[i]);
        printf("Digite a primeira nota de %c: ", nomes[i]);
        scanf("%f", &notas1[i]);
        printf("Digite a segunda nota de %c: ", nomes[i]);
        scanf("%f", &notas2[i]);
    }
}