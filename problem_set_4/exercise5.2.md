
Student ID: 00348504
Description: Code the exercise with comments of what gets printed. Also a code block with a bash code with the output 

```c
#define TRUE 1
#define FALSE 0

short isHoopy (int);
short isFrabjuous (int);

int main (void)
{
    short flag1 = IsHoopy (202);
    short flag2 = IsFrabjuous (202);

    printf ("%i\n", flag1); // 1
    printf ("%i\n", flag2); // 1

    if (flag1 && flag2) {
        puts ("ping!"); // ping is print 
    }

    if (flag1 || flag2) {
    puts("pong!"); // pong is also print
    }

    return EXIT_SUCCESS;
}

short isHoopy (int x) {

    short hoopyFlag;
    if (x%2 == 0) {
        hoopyFlag = TRUE;
    }
    else {
        hoopyFlag = FALSE;
    }

    return hoopyFlag;
}

short isFrabjuous (int x) {

    short frabjuousFlag;

    if (x > 0) {
    frabjuousFlag = TRUE;
    }
    else {
    frabjuousFlag = FALSE;
    }

    return frabjuousFlag;
}

```

output:
```sh
1
1
ping!
pong!
```
