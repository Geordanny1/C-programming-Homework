
/* STUDENT ID: 00348504
   Description: I set function prototype of botttleOfBeer. Then I define the function. It takes a number, check if the number is
   equal to zero it  prints an string and returns ending the function. In case the number is not equal it print call the function again with one less of the number*/
# include <stdio.h>

void bottlesOfBeer(int);

int main()
{
  bottlesOfBeer(99);
}

void bottlesOfBeer(int bottles) {
  if (bottles == 0) {
    printf("No bottles of beer on the wall, no bottles of beer, ya’ can’t take one down,ya’ can’t pass it around, ’cause there are no more bottles of beer on the wall!\n");
    return;
  }

  printf("%d bottles of beer on the wall, %d bottles of beer, ya’ take one down, ya’ pass it around, %d bottles of beer on the wall.\n", bottles, bottles, bottles - 1);


  bottlesOfBeer(bottles - 1);
}

