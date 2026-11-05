/* STUDENT ID: 00348504
 Description:  This is the exercise 4.1 I evaluete some expression and it prints weather the expression was true or false */

# include <stdio.h>


int main()
{
  int m = 0;
  int n = 1;
  char p = 'k';
  char s = 'F';
  double t = 1.2;

  if (m /n)
  {
    printf("m / n is consider true\n");
  } else{
    printf("m / n is consider false\n");
  }

  if (n + n){
    printf("m + n is consider true\n");
  } else {
    printf("m + n is consider true\n");
  }

  if ( m ) {
    printf("m is consider true\n");
  }else {
    printf("m is consider false\n");
  }

  if (p <= s) {
    printf("p <= s  is consider true\n");
  } else {
    printf("p <= s  is consider false\n");
  }


  if ( t < n) {
    printf("t < n is consider true\n");
  } else {
    printf("t < n is consider false\n");
  }
}
