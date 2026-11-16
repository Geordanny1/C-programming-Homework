
/*
  sources:
https://stackoverflow.com/questions/58146750/how-do-i-check-if-a-string-contains-a-certain-character
 
 */

# include <stdio.h>
# include <string.h>
# include <stdbool.h>

bool TestWord(char*, char*);
bool WildTestWord(char*, char*);
int getNumberOfTilesNeeded (char*, const char*);

int main()
{
  char *tiles = "anan**";
   char *targetWord = "banana";
  
  int foo = TestWord(tiles, targetWord);
  
  return 0;
}


bool TestWord(char* tiles, char* word)
{
  int numberOfTiles = strlen(tiles);
  size_t wordLength = strlen(word);

  int numberOfWildCards = 0;

  if ( wordLength > numberOfTiles ) return false;

  if ( strstr(tiles, word) != NULL ) {
    return true;
  }
  else
    {
      for (int i = 0; i < numberOfTiles; i++)
        {
          if (tiles[i] == '*')
            {
              numberOfWildCards += 1;
            }
        }
      const char *foo = word;
      int neededTiles = getNumberOfTilesNeeded(tiles, foo);
      if (neededTiles + numberOfTiles >= wordLength)
        {
          puts("You can make the word");
          return true;
        }
      else
        {
          puts("you cannot make the word");
          return false;
        }
    }
}

bool WildTestWord(char* tiles, char* word)
{
  int numberOfTiles = strlen(tiles);
  size_t wordLength = strlen(word);

  int numberOfWildCards = 0;
  
  if ( wordLength > numberOfTiles ) return 0;
  
  for (int i = 0; i <= numberOfTiles; i++)
    {
      if (tiles[i] == '*')
        {
          numberOfWildCards += 1;
        }
    }
  
  printf("%d\n", numberOfWildCards);
  
  return true;
}

int getNumberOfTilesNeeded( char* tiles,const char* word )
{

  size_t wordLength    = strlen(word);
  size_t numberOfTiles = strlen(tiles);
  int occurences = 0;
  printf("word length: %d\n", wordLength);
  
  for (int i = 0; i < numberOfTiles; i++)
    {
      if (strchr( word, tiles[i]) != NULL)
        {
          occurences += 1;
        }
    }
  
  return wordLength - occurences;
}

