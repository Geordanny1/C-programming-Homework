/* student ID: 00348504 */
/* Description: Code for Exercises 3.5 I create a for multadd and yikes.
   multadd acepts three doublue and performance a*b + c. Then we have yikes
   that xe^-x + \sqrt{1 - e^-x} and then returns it.
*/

# include <stdio.h>
# include <math.h>

double multadd(double a, double b, double c);
double yikes (double number);

int main()
{

  double PI = 3.14159265359;

  multadd(1.0, 2.0, 3.0);

  double a = sin(PI/4);
  double b = 1/2;
  double c = cos(PI/4);

  double A =  multadd(a,b,c);
  double result = yikes(10);

  printf("%lf\n", result);
  printf("%lf\n", A);

  return 0;
}

double multadd(double a, double b, double c)
{
  return a*b +c;
}

double yikes (double x)
{

  /* exp(1) = e^1 */
  double radical_expression = sqrt(1 - exp(-x) );

  printf("value of x %lf\n", x);
  printf("value of exp(-x) %lf\n", exp(-x));
  printf("value of radical %lf\n", radical_expression);
  double result =  multadd(x, exp(-x), radical_expression);

  printf("%lf\n", result);

  return result;
  
}


