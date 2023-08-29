#include<stdio.h>

main(){

// leia a altura e imprima se é maior que 1.8m

float altura;

printf("Digite sua altura");
scanf("%f", &altura);

if(altura > 1.80){

    printf("Maior que 1.80");

}else{
    printf("Menor que 1.80");
}

}