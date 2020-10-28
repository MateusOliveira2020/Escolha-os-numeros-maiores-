#include <stdio.h>

/*- Entre três valores e exiba a soma dos dois maiores.*/

int main(void) {

  int v1 = 0;
  int v2 = 0;
  int v3 = 0;
  int resultado = 0;
 
  printf("  Entre com o primeiro valor: ");
  scanf("%i", &v1);
  printf("\n  Entre com o segundo valor:  ");
  scanf("%i", &v2);
  printf("\n  Entre com o terceiro valor: ");
  scanf("%i", &v3);

  if(v1 >= v2 && v2 >= v3){

    resultado = v1 + v2;
    printf("\n      %i + %i = %i", v1, v2, resultado);

  }

  else if(v1 >= v2 && v3 >= v2){

    resultado = v1 + v3;
    printf("\n      %i + %i = %i", v1, v3, resultado);

  }

  else {
    
    resultado = v2 + v3;
    printf("\n      %i + %i = %i", v2, v3, resultado);
  }
  return 0;
}