#include<stdio.h>
int main (
    int numeroCarta
    printf("escriba el numero de su carta");
    scanf("%d",&numeroCarta);
    if (numeroCarta==1){
        printf("as\n");
    }else if (numeroCarta==10){
        printf("sota\n");
    }else if (numeroCarta==11){
        printf("caballo\n");
    }else if (numeroCarta==12){
        printf("rey\n");
    }else if (numeroCarta==2){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==3){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==4){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==5){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==6){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==7){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==8){
        printf("no es ninguna figura y tampoco es as\n");
    }else if (numeroCarta==9){
        printf("no es ninguna figura y tampoco es as\n");
    }else{
        printf("ese numero no es de la baraja española\n");
    }
    return 0;
)