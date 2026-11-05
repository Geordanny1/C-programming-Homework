/*
 * Student Id: 00348504
 * Description:
 *
 * Refecen used: https://www.youtube.com/watch?v=n_Se6bt8jM0 
*/


// A
int *a = malloc(3 * sizeof *a);
a[3] = 10;
free(a);

// B
int *b = malloc(3 * sizeof *b);
b = NULL;

// C
int *c = malloc(3 * sizeof *c);
int *alias = c;
free(c);
*alias = 10;
free(alias);
