
/* Student ID: 00348504
Description: We created a prototype and then define a function called isTriangle that check if the values  provided form a triangle*/

# include <stdio.h>
# include <math.h>
# include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool isTriangle(int longets_side, int sideA, int sideB);

int main()
{

  isTriangle(12, 1,1);
  isTriangle(29, 5, 2);

  return 0;
}


bool isTriangle(int longets_side, int sideA, int sideB) 
{
  int hyponetus = pow(sideA, 2) + pow(sideB, 2);
  // printf("%d\n", hyponetus);

  if (hyponetus != longets_side) {
    puts("This is not a valid triangle");
    return FALSE;
  }

  puts("This is a valid triangle");
  return TRUE;

}
