#include <stdio.h>
int main(void)
{
    int x, y, soma;
    printf("Digite um valor qualquer para x");
    scanf("%d",&x);
    printf("Digite um valor qualquer para y");
    scanf("%d",&y);
    soma=x+y;
    printf("A soma de %d + %d = %d",x,y,soma);
    return 0;
}

