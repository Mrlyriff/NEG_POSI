#include <stdio.h>
#include <locale.h>

  int main(){
      setlocale(LC_ALL, "Portuguese");
      float numero;

  printf("Informe um número: ");
  scanf("%f", &numero);

if (numero >0){
printf("O número é positivo.");
 }
 else{
     printf("O número pe negativo.");
 }
}
