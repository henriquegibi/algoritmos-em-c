#include <stdio.h>

int main () {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o valor do sal�rio: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura: ");
    scanf("%lf", &altura);

    printf("Idade = %d\n", idade);
    printf("Sal�rio = %.2lf\n", salario);
    printf("Altura = %.2lf\n", altura);

    return 0;
}
