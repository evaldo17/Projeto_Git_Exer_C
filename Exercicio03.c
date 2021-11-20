#include <stdio.h>
int soma(int x, int y){
	return x+y;
}
int main(void)
{
	int a,b;
	printf("Digite uma valor para a: ");
	scanf("%d",&a);
	printf("Digite uma valor para b: ");
	scanf("%d",&b);
	printf("A soma de %d + %d = %d",a,b,soma(a,b));
	return 0;
}

