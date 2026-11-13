
/* Student ID: 00348504 */
/* Description:
   This is the code for exercises 8.1
   
   the functions IsAbecedarian() takes a char pointer and a int (char pointer being the string the int the size of the string). We literate though the last index of string -1, ignoring the last element. This prevent the program from
   over indexing.
   Taking: "BANANA"
                ^ (N)
		Starting this point
		then we compared with "BANANA" (A)
		                          ^
					  If N < A this means that N goes first on the alphabet but it is
					  before on the word. It repest the process with each letter.
*/
/* Activity :*/
/* a. Describe an algorithm for checking whether a given word (String) is abecedarian, assuming that the word contains only lower-case letters. Your algorithm can be iterative or recursive. */

/* b. Implement your algorithm in a function called IsAbecedarian(). */

# include <stdio.h>
# include <string.h>

int IsAbecedarian(char*,int);


int main() {
   
  char* words[] = {
    "abdest", "acknow", "acorsy", "adempt", "adipsy", "agnosy", "befist", "behint", "beknow",
    "bijoux", "biopsy", "cestuy", "chintz", "deflux", "dehors", "dehort", "deinos", "diluvy",
    "dimpsy", "banana", "another"
  };

  int sizeWords = sizeof(words)/sizeof(char*);


  for (int i = 0; i < sizeWords; i++) {
    char *word = words[i];
    int wordSize = strlen(word);

    if (IsAbecedarian(word, wordSize)) {
      printf("the word %s is abecedarian\n", word);
    }
    else {
      printf("the word %s is not abecedarian\n", word);
    }
  }

  /*   int isAbecedarian	= 1; */
  /*   char *word		= words[i]; */
  /*   int sizeWord	= strlen(word) -1; */

  /*   for (int j = sizeWord; j >= 0; j--) { */
  /*     if (word[j] < word[j-1]) { */
  /* 	isAbecedarian = 0; */
  /* 	break; */
  /*     } */
  /*   } */

  /*   if (isAbecedarian) { */
  /*     printf("The word %s is abacedarian\n", word); */
  /*   }else { */
  /*     printf("The word %s is not abacedarian\n", word); */
  /*   } */

  /* } */
  

  return 0;
}



int IsAbecedarian(char* word,int length)
{
  int isAbc = 1;

  for (int i = length - 1; i >= 0; i--) {
    if (word[i] < word[i-1]) {
      isAbc = 0;
      break;
    }
  }

  if (isAbc) {
    return 1;
  }else {
    return 0;
  }
  
}
