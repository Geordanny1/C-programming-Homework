/*
  Student ID: 00348504
  Description:
    Is this program we a function called Isdoubllon, this checks weather the word provided is a doubloon or not. Also I make of the funciton
    I created on the exercise8.2 LetterHist to check how many times check character appers.
  sources:
    https://stackoverflow.com/questions/2661766/how-do-i-lowercase-a-string-in-c
*/

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdbool.h>

int IsDoubloon(char*);
int characterApperences(char*);
void LetterHist(char*, int*);
void printIntArray(int [], int );

int main()
{
  char* words[] ={
	"Abba", "Anna", "appall", "appearer", "appeases", "arraigning", "beriberi", "bilabial",
	"boob", "Caucasus", "coco", "Dada", "deed", "Emmett", "Hannah", "horseshoer", "in",
	"testines", "Isis", "mama", "Mimi", "murmur", "noon", "Otto", "papa", "peep", "reappear",
	"redder", "sees", "Shanghaiings", "Toto", "bingo"
  };

  int numberOfWords = sizeof(words)/sizeof(char*);

  for (int i = 0; i < numberOfWords; i++) {
    IsDoubloon(words[i]);
  }

  return 0;
}

int IsDoubloon(char* word)
{
  int wordApperences[26] = {};

  LetterHist(word, wordApperences);

  for( int i = 0; i < 26; i++) {
    if (wordApperences[i] != 0 && wordApperences[i] != 2) {
	printf("The word %s is not a doubloon\n", word);
	return false;
    }
  }
  printf("The word %s is a doubllon\n", word);
  return true;
}

int getAlphabeticalPosition(char letter)
{

  int position = 0;

  /* Ascii range upperCase = [65, 91] */
  /* ascii range lowerCase = [97, 122] */

  if (letter >=  65 && letter <= 91) {
    letter = tolower(letter);
    position = (int)letter - 'a' + 1;
  } else {
    position = (int)letter - 'a' + 1;
  }
  return position;
}

void LetterHist(char* string, int *array)
{
  int stringLength = strlen(string);
  for (int i = 0; i < stringLength; i++) {
    int position = getAlphabeticalPosition(string[i]);
    array[position - 1] += 1;
  }
}

void printIntArray(int values[], int count)
{
  printf("{ ");
  for (int i = 0; i <= count - 1; i++) {
    if (i == count - 1) {
      printf("%d", values[i]);
    } else {
      printf("%d, ", values[i]);
    }
  }
  printf(" }\n");
}
