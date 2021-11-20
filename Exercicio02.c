#include <stdio.h>
int main(void)
{
    int n, cont;
    float num, soma=0,media;
    printf("Quantos números deseja calcular a média? ");
    scanf("%d",&n);
    if(n<0){
        printf("Dados Incorretos, o número deve ser positivo.");
        scanf("%d",&n);
    }
    for(cont=1;cont<=n;cont++){
        printf("Digite um número qualquer:");
        scanf("%f",&num);
        soma = soma+num;
    }
    media=soma/n;
    printf("A média dos números fornecidos são: %.2f\n",media);
    return 0;
}
