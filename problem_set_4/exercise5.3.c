
/* Student ID: 00348504
Description: 
  functionOne take 2 arguments m and n. It has three cases: m < n, m > n and m == n. 
  if m == n return n.
  if m < n it will do the operation functionOne(m + functionOne(m+1, n )). I will take every number that it took to take up to m == n and add to n.
  for Example it function (1,4) it takes 1, 2 and 3 to go up to 4. So 1 + 2 + 3 + 4 = 10
  if m > n endless loop. 


  functionTwo take 2 arguments m and n. It has three cases: m < n, m > n and m == n. 
  if m == n return n.
  if m < n It will do functionTwo(n * functionTwo(m-1,n)) similar to functionOne,
  it will take all the that it took to take up to m == n but instead of adding it multiples.
  for example functionTwo(1,4) it take 1, 2, 3, to go up to 4 so it does 1 * 2 * 3 * 4 = 24 
  If it is call with m = 1, and with a n value other than 0 it will return n factorial or n! 
  if m > n endless loop

  I was completly wrong about this till I took to read carefully didn't change the 
*/

# include <stdio.h>

int functionOne(int, int);
int functionTwo(int, int);

int main()
{

  // int call_first = functionOne(1, 2);
  // int call_second = functionOne(1, 5);
  // int call_third = functionTwo(1, 10);
  int call_fourth = functionTwo(1, 4);

  printf("%d\n", call_fourth);
  // printf("%d\n", call_second);
  // printf("%d\n", call_third);

  // int call_second = equal_going_up(0, 20);
  // int call_thid = equal_going_down(-3, 7);
}


// add_all_numbers_up_to
int functionOne(int m, int n)
{

  printf("value of m: %d\n", m);
  printf("value of n: %d\n", n);

  if (m == n) {
    return n;
  }

  else
  {
    printf("Returning  %d + functionOne(%d, %d)\n",m, m+1, n);
    return m + functionOne(m+1, n);
  }

}

// multiply_all_numbers_up_to
int functionTwo(int m, int n)
{
  printf("value of m: %d\n", m);
  printf("value of n: %d\n", n);

  if (m == n) {
    return n;
  }
  else
  {
    printf("Returning  %d * functionOne(%d, %d)\n",m, m+1, n);
    return n * functionTwo(m, n-1);
  }

}
