#include<stdio.h>

main(){

    int salario, salariominimo = 1200;

    printf("Digite o salario");
    scanf("%d", &salario);


    if(salario >= salariominimo){


        printf("o salario é maior que o salariominimo");
    
   }else{

        printf("O salario é menor");
   }
    

}