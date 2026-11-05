
# First (A)

```c
int *a = malloc(3 * sizeof *a);
a[3] = 10;
free(a);

```

Code fixed:
```c
int *a = malloc(3 * sizeof(int));
a[2] = 10;
free(a);
a = NULL;
```

--------------------------------------------------------------------------------------------
# Second (B)
```c
int *b = malloc(3 * sizeof *b);
b = NULL;
```

Code fixed:
```c
int *b = malloc(3 * sizeof(int));
free(b);
b = NULL; 
```

--------------------------------------------------------------------------------------------
# Third (C)
```c
int *c = malloc(3 * sizeof(int));
int *alias = c;
*alias = 10;

free(c);
free(alias);

```

Code Fixed:
```c
int *c = malloc(3 * sizeof *c);
int *alias = c;
*alias = 10;

free(c);
free(alias);

c     = NULL;
alias = NULL;

```

