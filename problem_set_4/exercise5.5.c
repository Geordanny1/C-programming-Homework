/* Student ID: 00348504
Description: The function sumSqaures take two aguments squares, add them and then return the result. The distancee function takes 4 arguments,
x_1, x_2, y_1, y_2, then ti subtracts x_2 - x_1 and y_2 - y_1  and then call sumSqaures, finally it take the result of calling sumSquares and take
the squareroot of that.
*/


# include <stdio.h>
# include <math.h>

double distance ( int, int, int, int );
int sumSquares (int first, int second);

int main()
{
  double A = distance(1,2, 4,5);

  printf("%lf\n", A);
  return 0; 
}


double distance (int x_1, int x_2, int y_1, int y_2)
{
  return sqrt(sumSquares(x_2 - x_1, y_2 - y_1));
}


int sumSquares(int term_first, int term_second) 
{
  int square_first  =  pow( term_first, 2);
  int square_second =  pow( term_second, 2);

  return square_first + square_second;
}



