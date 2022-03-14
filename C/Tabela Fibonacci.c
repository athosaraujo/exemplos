#include <stdio.h>
// Tabela Fibonacci
int main(){
 int i, n1=0,n2=1,n3;
 	printf("1, ");
    n3 = n1 + n2;
 for (i = 1; i < 9; ++i) {
    printf("%d, ", n3);
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  } printf("%d", n3);
}
