# funci-n-modular

#include <stdio.h>

float area_rectangulo(float base, float altura){
return base * altura;
}

float area_cuadrado(float lado){
return lado * lado;
}

float area_triangulo(float base, float altura){
return (base * altura)/2;
}

int main(){

int opcion;
float base, altura, lado, area;

printf("--- Calculo de areas ---\n");
printf("1. area de un rectangulo\n");
printf("2. area de un cuadrado\n");
printf("3. area de un triangulo\n");
printf("4. salir\n");
printf("seleccione una opcion: ");
scanf ("%d",&opcion);


switch(opcion){

    case 1:
    printf("--- area de un rectangulo ---\n");
    printf("ingrese base y altura\n");
    scanf("%f %f", &base, &altura);
    area = area_rectangulo (base, altura);
    printf("el area del rectangulo es: %.2f\n", area);
    break;

    case 2:
    printf("\n--- area de un cuadrado ---\n");
    printf("ingrese el lado: \n");
    scanf("%f", &lado);
    area = area_cuadrado(lado);
    printf("el area del cuadrado es: %.2f\n", area);
    break;

     case 3:
    printf("\n--- area de un triangulo ---\n");
    printf("ingrese base y altura: \n");
    scanf("%f %f", &base, &altura);
    area = area_triangulo(base, altura);
    printf("el area del triangulo es: %.2f\n", area);
    break;

    case 4:
    printf("\saliendo del programa...\n");
    break;

    default:
        printf("\nopcion no valida. intente de nuevo. \n");
}
     return 0;
}
