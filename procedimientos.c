#include <stdio.h>

void cuadrado_por_valor(int n){
    n = n *n;
    printf("[cuadrado_por_referencia] *n = %d\n", n);
}

void cuadrado_por_referencia(int *n){
    *n = (*n)*(*n);
    printf("[cuadrado_por_referencia] *n = %d\n", *n);
}

int main(){

    int a = 3, b = 3;

    printf("antes de cuadrado_por_valor: a = %d\n" ,a);
    cuadrado_por_valor(a);
    printf("antes de cuadrado_por_valor: a = %d\n\n" ,a);

    printf("antes de cuadrado_por_referencia: b = %d\n" ,b);
    cuadrado_por_referencia(&b);
    printf("antes de cuadrado_por_referencia: b = %d\n\n" ,b);

    return 0;
}


/*void funcion1(int *A){
    printf("%d\n", *A);
    *A=10;
    printf("%d\n", *A);
return 0;
}

int main(){

    int A= 5;
    printf("%d\n",A);

    funcion1(&A);
    printf("%d\n", A);
}*/


