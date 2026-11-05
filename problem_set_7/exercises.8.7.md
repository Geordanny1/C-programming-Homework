
Student Id: 00348504
Description: Explain the code 

Question:
Explain why bad_result from Section 8 7 is unsafe. Write two safe alternatives: one that returns an int, and one that receives a pointer to an existing integer and stores 25 there. Identify who owns each result object.

code:
```c

int *bad_result(void)
{
    int result = 25;
    return &result;       // Incorrect: result will no longer exist
}
```
Answer:
Every time a funciton ends its execution, the values inside that function
get delete. In the code we are return a pointer that points to a variable inside the funciton. Once the fucntion ends, that value will be deleted.



