#include <stdio.h>
int main() {
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  // swapping
  a = a + b;   
  b = a - b;
  a = a - b;
  printf("After swapping a = %d\n", a);
  printf("After swapping b = %d\n", b);
  return 0;
}
