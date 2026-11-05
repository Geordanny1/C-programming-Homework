/*
 * Student Id: 00348504
 * Descirption: Fix the error of a programprogram
*/


/*
 * A function has the prototype void double_value(int *value);. A caller writes double_value(number); for an int variable number. Correct the call and implement the function. Use small values such as 6 and -4 so doubling stays within the range of int. Explain what is copied at the call.
 * Answer:
 * We are doing a fucntion call and passing an integer, but the funciton is waiting an integer pointer
 */


// correct implementation:


# include <stdio.h>

void double_value(int *value);

int main()
{
  int number = 4;

  // double_value(number) incorrect callkj
  //


  // passing the address
  double_value(&number);
  printf("The value of %d\n", number);


  //same thing but passing a pointet
  int *ptrNumber = &number;
  double_value(ptrNumber);
  printf("The value of %d\n", number);


  return 0; 
}


void double_value(int *value)
{
  *value = (*value)*2;
}
