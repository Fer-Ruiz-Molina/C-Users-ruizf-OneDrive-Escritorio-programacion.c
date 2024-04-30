#include <stdio.h>
int main ()
{
    int altura, base, baseM, basem;
    printf("area del triangulo");
    printf("ingrese el tamaño de la base");
    scanf("%d",&base);
    printf("ingrese el tamaño de la altura");
    scanf("%d",&altura);
    area=base*altura/2;
    printf("%d es el area del triangulo");
    break;

    printf("area del trapecio");
    printf("ingrese el tamaño de la base mayor");
    scanf("%d",&baseM);
    printf("ingrese el tamaño de la base menor");
    scanf("%d",&basem);
    printf("ingrese el tamaño de la altura");
    scanf("%d",&altura);
    area=baseM+basem*altura/2;
    printf("%d es el area del trapecio");
    break;

    printf("area del rectangulo");
    printf("ingrese el tamaño de la base");
    scanf("%d",&base);
    printf("ingrese el tamaño de la altura");
    scanf("%d",&altura);
    area=base*altura;
    printf("%d es el area del rectangulo");
    break;

    return 0;
}