#include <stdio.h>
#include <stdbool.h>

void main() {
  bool t = true;
  int a = 10;
  int b = 2;
  int c;

  /**
   * Operadores binários  -- São utilizados com dois operandos:     A + B
   * Operadores unários   -- São utilizados com apenas um operando: A++
  */

  // Operadores lógicos
  printf("########### Operadores logicos ###########\n");
  printf("Operadores binarios\n");

  c = a; // atribuição
  printf("Atribuicao C = A: %i\n", c);
  c = a + b; // adição
  printf("Adicao C = A + B : %i\n", c);
  c = a - b; // subtração
  printf("Subtracao C = A - B: %i\n", c);
  c = a * b; // multiplicação
  printf("Multiplicacao C = A * B: %i\n", c);
  c = a / b; // divisão
  printf("Divicao C = A / B: %i\n", c);
  c = a % b; // módulo 
  printf("Modulo C = A %% B: %i\n\n", c);

  printf("Operadores binarios\n");
  int d;
  d = +a; // unário de adição
  printf("Unario de adicao +A: %i\n", d);
  d = -a; // unário de subtração
  printf("Undario de subtracao -A: %i\n", d);
  ++a; // incremento
  printf("Incremento ++A ou A++: %i\n", a);
  --a; // decremento
  printf("Decremento --A ou A--: %i\n", a);

  // Operadores de comparação
  printf("########### Operadores de comparacao ###########\n");
  /**
   * == Operador de igual           A == B
   * != Operador de diferente       A != B
   * >  Operador de maior           A > B
   * <  Operador de menor           A < B
   * >= Operador de maior ou igual  A >= B
   * <= Operador de menor ou igual  A <= B
  */

  if(a == b) printf("A IGUAL B: A == B\n");
  if(a != b) printf("A DIFERENTE B: A != B\n");
  if(a > b) printf("A MAIOR QUE B: A > B\n");
  if(a < b) printf("A MENOR QUE B: A < B\n");
  if(a >= b) printf("A MAIOR OU IGUAL B: A >= B\n");
  if(a <= b) printf("A MENOR OU IGUAL B: A <= B\n");

  // Operadores lógicos
  printf("########### Operadores logicos ###########\n");
  /**
   * !  --> NOT --> !A
   * && --> AND --> A && B
   * || --> OR  --> A || B
  */

  if(t) printf("Se T IS TRUE.\n");

  t = false;
  if(!t) printf("Se T NOT TRUE.\n");
  if(!t && a == 10) printf("Se T NOT TRUE AND A == 10.\n");
  if(t || b == 2) printf("Se T IS TRUE OR B == 2.\n");

  // Operadores de Atribuição Compostos
  printf("########### Operadores de atribuicao compostos ###########\n");

  a += b;
  printf("Atribuicao e adicao A += B: %i\n", a);
  a -= b;
  printf("Atribuicao e subtracao A -= B: %i\n", a);
  a *= b;
  printf("Atribuicao e multiplicacao A *= B: %i\n", a);
  
  a = 9;
  b = 3;
  
  a /= b;
  printf("Atribuicao e divisao B /= A: %i\n", a);
  a %= b;
  printf("Atribuicao e modulo B /= A: %i\n", a);

  // Operador ternário
  printf("########### Operador ternario ###########\n");
  /**
   * <condição> ? <expressão> : <expressão>
  */

  t = true;
  t ? printf("Verdadeiro\n") : printf("Falso\n");

  // Sizeof
  printf("########### sizeof ###########\n");

  int age = 37;
  printf("Tamanho em bytes da variavel age: %ld bytes\n", sizeof(age));

  return 0;
}