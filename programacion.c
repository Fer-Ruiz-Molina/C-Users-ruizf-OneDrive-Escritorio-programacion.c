#include <stdio.h>
int main() 
{
    float horas, precioxhora, salario;

    printf("indique cuantas horas trabajo en la semana");
    scanf("%d", &horas);
    printf("indique el precio por hora trabajada");
    scanf("%d", &precioxhora);
    if (horas <= 40) {
        salario = horas * precioxhora;
    } else if (horas > 40 & horas <= 50) {
        salario = 40 * precioxhora + (horas - 40) * precioxhora * 1.5;
    } else {
        salario = 40 * precioxhora + 10 * precioxhora * 1.5 + (horas - 50) * precioxhora * 2;
    }
    printf("El salario semanal del trabajador es: $%.2d\n", salario);

    return 0;
}