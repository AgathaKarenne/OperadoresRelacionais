#include<stdio.h>

main(){

    // leia o peso e imprima se é menor que 60kg//

    double peso;

    printf("Digite o peso");
    scanf("%lf", &peso);

    if(peso < 60.0){
        printf("Menor que 60");

    }else{
        printf("Maior que 60");
    }


    
    
}