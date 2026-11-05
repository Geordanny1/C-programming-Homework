/* student ID: 00348504 */
/* Description: Code for Exercises 3.4. I create a function prototype for
  printDateAmerican and printEuropeanFormat functions. Then we declare this
  function. In the main program we initialize the day, month and year variables to assign them to value
  from a call of the scanf function. We call printDateAmerican values of those variables. Then we repeat with
  printEuropeanFormat.
*/


/**/
# include <stdio.h>

void printDateAmerican(char day, char month, int year);
void printEuropeanFormat(char day, char month, int year);

/* The book does no tell me to check if the values provide are 
valid months/days so basically both for any format */

int main()
{
  /* printf("Hello, World!\n"); */

  /* printDateAmerican(9,4,2026); */
  /* printEuropeanFormat(3,9,2021); */

  int day;
  int month;
  int year;

  puts("Enter a number to represent the day US_format");
  scanf("%i", &day);

  puts("Enter a number to represent the month US_format");
  scanf("%i", &month);

  puts("Enter a number to represent the year US_format");
  scanf("%i", &year);

  printDateAmerican(day,month,year);

  puts("Enter a number to represent the day EU_format");
  scanf("%i", &day);

  puts("Enter a number to represent the month EU_format");
  scanf("%i", &month);

  puts("Enter a number to represent the year EU_format");
  scanf("%i", &year);

  
  printDateAmerican(month, day, year);

  return 0;
}

void printDateAmerican(char day, char month, int year)
{
  printf("%d/%d/%d\n", day, month, year);
}

void printEuropeanFormat(char day, char month, int year)
{
  printf("%d/%d/%d\n", day, month, year);
}
