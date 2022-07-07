# C-More functions, More nested loops

This is the fifth ALX low level programing task, it is basically a continuation of [C-Functions, nested loops](https://github.com/Sanctus-Peter/alx-low_level_programming/tree/main/0x02-functions_nested_loops). This tasks seeks to expand on [Function](https://www.geeksforgeeks.org/functions-in-c/) [declaration, definition, arguements](https://www.tutorialspoint.com/cprogramming/c_functions.htm), [prototypes](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/), [header](https://www.tutorialspoint.com/cprogramming/c_header_files.htm),[see also](https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/)  and  calling. [see also](https://www.youtube.com/watch?v=qMlnFwYdqIw) further explains the concept of [C library](https://www.geeksforgeeks.org/c-library-functions/) and finally, [nested loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss). At the end of this tasks, I now have a better understanding of the afore mentioned, along side the **gcc** flags **-Wall -Werror -pedantic -Wextra -std=gnu89**

## Tasks
for the following tasks I wasnt allowed to use the built in function in the C standard library. Example **printf, puts, putchar etc...**. A **_putchar** function was defined for us by ALX as seen below.
```C
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Thecharater to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
 int _putchar(char c)
 {
 	return (write(1, &c, 1));
 }
```

