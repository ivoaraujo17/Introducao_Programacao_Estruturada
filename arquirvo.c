# include <stdio.h>

int main(){
    float n1, n2, n3, media;
    char nome[20];
    printf("Informe o nome do aluno: ");
    scanf("%f", &nome);
    printf("Informe as 3 notas do aluno, apertando enter a cada nota: ");
    scanf("%f %f %f", &n1,&n2,&n3);
    media = (n1 + n2 + n3)/3;
    printf("A media do aluno %c é %.2f", nome, media);
}

