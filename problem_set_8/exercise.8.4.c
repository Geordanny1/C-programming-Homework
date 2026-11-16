/*
  Student ID: 00348504
  Description:
 */

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void captainCrunch(char*, char*);
void customCaptainCrunch(char*, int);

int main()
{
  char *waldo = "Z";
  size_t waldoSize = strlen(waldo);
  char *stringContainer = calloc(waldoSize, sizeof(char));

  captainCrunch(waldo, stringContainer);

  return 0;
}

void captainCrunch(char *string, char* stringContainer)
{
 
  /* Ascii range upperCase = [65, 90] */
  /* ascii range lowerCase = [97, 122] */

  int minUppercaseBound = 65;
  int maxUppercaseBound = 90;

  int minLowercaseBound = 97;
  int maxLowercaseBound = 122;

  int shift = 13; 
  size_t stringLength = strlen(string);

  strcpy(stringContainer, string);

  for (int i = 0; i <= stringLength; i++)
    {
      if (stringContainer[i] >= minUppercaseBound && stringContainer[i] <= maxUppercaseBound)
        {
          if (stringContainer[i] + shift > maxUppercaseBound)
            {
              int outbound = ( stringContainer[i] + shift ) - maxUppercaseBound;
              stringContainer[i] = 'A' + outbound;
            }
          else
            {
              stringContainer[i] += shift;
            }
        }
      else if (stringContainer[i] >= minLowercaseBound && stringContainer[i] <= maxLowercaseBound)
        {
          if (stringContainer[i] + shift > maxLowercaseBound)
            {
              int outbound = ( stringContainer[i] + shift ) - maxLowercaseBound;
              stringContainer[i] = 'a' + outbound;
            }
          else
            {
              stringContainer[i] += shift;
            }
        }
    }

  printf("%s\n",stringContainer);
}

void customCaptainCrunch(char *string, int shift)
{
  
  if (shift == 0) return;

  /* Ascii range upperCase = [65, 90] */
  /* ascii range lowerCase = [97, 122] */

  int minUppercaseBound = 65;
  int maxUppercaseBound = 90;

  int minLowercaseBound = 97;
  int maxLowercaseBound= 122;

  int stringLength = strlen(string);

  char *stringContainer = calloc(stringLength, sizeof(char));

  strcpy(stringContainer, string);
  for (int i = 0; i <= stringLength; i++)
    {
      if (shift < 0)
        {
          if (stringContainer[i] >= minUppercaseBound && stringContainer[i] <= maxUppercaseBound)
            {
              if (stringContainer[i] + shift < minUppercaseBound)
                {
                  int outbound  = ( stringContainer[i] + shift ) - minUppercaseBound;
                  stringContainer[i] = 'Z' + outbound + 1;
                }

              else
                {
                  stringContainer[i] += shift;
                }
            }
          else if (stringContainer[i] >= minLowercaseBound && stringContainer[i] <= maxLowercaseBound)
            {
              if (stringContainer[i] + shift < minLowercaseBound)
                {
                  int outbound  = ( stringContainer[i] + shift ) - minLowercaseBound;
                  stringContainer[i] = 'z' + outbound + 1;
                }

              else
                {
                  stringContainer[i] += shift;
                }
            }
        }
      else
        {
          if (stringContainer[i] >= minUppercaseBound && stringContainer[i] <= maxUppercaseBound)
            {
              if (stringContainer[i] + shift > maxUppercaseBound)
                {
                  int outbound = ( stringContainer[i] + shift ) - maxUppercaseBound;
                  stringContainer[i] = 'A' + outbound;
                }
              else
                {
                  stringContainer[i] += shift;
                }
            }
          else if (stringContainer[i] >= minLowercaseBound && stringContainer[i] <= maxLowercaseBound)
            {
              if (stringContainer[i] + shift > maxLowercaseBound)
                {
                  int outbound = ( stringContainer[i] + shift ) - maxLowercaseBound;
                  stringContainer[i] = 'a' + outbound;
                }
              else
                {
                  stringContainer[i] += shift;
                }
            }
        }
    }
  printf("%s\n", stringContainer);
}

