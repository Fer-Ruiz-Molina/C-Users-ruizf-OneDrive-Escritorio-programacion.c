#include <stdio.h>
#include <string.h>
int main ()
{
    int N, intentos;
    char usuario[100];
    char contrasena[4]="2b37";
    float total_defactura = 0;
    int cantidad;
    float precio_unitario;
    printf("introduzca su nombre de usuario: \n");
    scanf("%s",usuario);
    N=1;
        do
        {
            printf("ingrese la contrasena: ");
            scanf("%s", contrasena);
            if (strcmp(contrasena,"2b37")==0)
            {
                printf("acceso permitido\n");
            }
            else
            {
                printf("acceso denegado\n");
                printf("llevas %d intento\n", N);
            }
            N=N+1;
        } while (intentos>0);
        {
            printf("bienvenido al sistema %s", usuario);
        }
    
    while(1){
        printf("ingrese la cantidad de unidades vendidas (0 para finalizar): ");
        scanf("%d",&cantidad);
        if (cantidad == 0){
            break;
        }
        printf("ingrese el precio unitario: ");
        scanf("%f",&precio_unitario);
        
        if (cantidad>0 && precio_unitario>0){
            total_defactura+=cantidad*precio_unitario;
        }else{
            printf("la cantidad y el precio deben ser numeros positivos.\n");
        }
        }
        printf("elm importe total de la factura es: %.2f\n",total_defactura);
        return 0;
    }