
Student Id: 00348504
Description: check the program

Given int data[4] = {6, 12, 18, 24}; and int *p = data;, find the values of *p + 2, *(p + 2), and p[3].
Explain why p + 4 may be formed but must not be dereferenced. Explain why sizeof p cannot reveal that data has four elements.

```c
int data[4] = {6, 12, 18, 24}; 
int *p = data;      // this points the address of the first element
int foo = *p +2;    // take the value of the first element of the array because that's what p is position to:  6 + 2 = 8
int bar = *(p + 2); // we add two the address of the first element and then we dereference 18
int waldo = p[3];   /* because p[3] is the same as *(p + 3), it means: p (pointer that points to the position 0, move it 3 times, and then
                    dereference it)*/
```

Explain why p + 4 may be formed but must not be dereferenced.

Answer:
We can perform p + 4 since we are just getting address that does not belong to the array, it should never be perform since we don't know what this
address might have. This leads to undefined behavior.

Explain why sizeof p cannot reveal that data has four elements.

Answer:
Size of returns the size of an object.

Taking the case of data from before we have an array of 4 integers, each of this integer is 4 bytes (it can be either 2 or 4 bytes, 16 or 64 bits, 4 bytes on my case)
4 * 4 = 16 bytes, so sizeof returns 16 bytes, not how many elements the array has.
