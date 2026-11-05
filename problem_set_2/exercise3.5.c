/* student ID: 00348504 */
/* Description: Code for Exercises 3.5 I create a for multadd and yikes.
   multadd acepts three doublue and performance a*b + c. Then we have yikes
   that xe^-x + \sqrt{1 - e^-x}
*/

# include <stdio.h>
# include <math.h>

void multadd(double a, double b, double c);
void yikes (double number);

int main()
{

  double PI = 3.14159265359;

  multadd(1.0, 2.0, 3.0);

  double a = sin(PI/4);
  double b = 1/2;
  double c = cos(PI/4);

  multadd(a,b,c);
  yikes(20.3);

  return 0;
}

void multadd(double a, double b, double c)
{
  printf("%lf\n", a*b +c);
}

void yikes (double x)
{

  double e = 2.71828;

  /* exp(1) = e^1 */
  double radical_expression = sqrt(1 - exp(-1*x) );

  printf("%lf\n", x*exp(-1*x) + radical_expression);
  
}

