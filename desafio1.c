#include<stdio.h>

main(){

 // ler a media do aluno
 // se media >= 7.0 - "aprovado"
 // senão media <4.0 - "reprovado"
 // senão media >=4.0 < 7.0 - "recuperacao"

  float mediaDoAluno;

  printf("Digite a media do aluno");
  scanf("%f", &mediaDoAluno);
  
  if(mediaDoAluno >= 7.0){

    printf("Aprovado");


  }else if(mediaDoAluno < 4.0){
    printf("Reprovado");

  }else if(mediaDoAluno >= 4.0 < 7.0){

    printf("Recuperação");

  }









 
}
