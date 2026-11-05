/* Student ID: 00348504
Description: the function power take two arguments one is the base, the other in the expoentn, and perfoms the operation base^exponent
*/
# include <stdio.h>

int power(int base, int exponent);

int main()
{

  int A = power(5, 2);
  int B = power(6, 2);
  int C = power(8, 0);

  printf("%d\n", A);
  printf("%d\n", B);
  printf("%d\n", C);

}

int power(int base, int exponent)
{
  if (exponent == 0) {
    return 1;
  }

  if (exponent == 1) {
    return base;
  }

  return base * power(base, exponent -1);

}
