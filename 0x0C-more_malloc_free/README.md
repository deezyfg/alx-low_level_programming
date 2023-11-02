# 0x0C. C - More malloc, free

This project delves deeper into memory management in C, primarily focusing on the use of `malloc` and `free`. Below, you'll find an overview of the tasks in this project:

## Tasks

### 0. Trust no one
Write a function that allocates memory using `malloc`.
* **Prototype:** `void *malloc_checked(unsigned int b);`
* **Returns:** A pointer to the allocated memory.
* If `malloc` fails, the `malloc_checked` function will cause normal process termination with a status value of 98.

### 1. string_nconcat
Write a function that concatenates two strings.
* **Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`
* The returned pointer shall point to a newly allocated space in memory, containing `s1`, followed by the first `n` bytes of `s2`, and is null-terminated.
* If the function fails, it should return `NULL`.
* If `n` is greater or equal to the length of `s2`, the function uses the entire string `s2`.
* If `NULL` is passed, it's treated as an empty string.

### 2. _calloc
Write a function that allocates memory for an array, using `malloc`.
* **Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`
* The `_calloc` function allocates memory for an array of `nmemb` elements, each with a size of `size` bytes, and returns a pointer to the allocated memory.
* The allocated memory is set to zero.
* If `nmemb` or `size` is 0, `_calloc` returns `NULL`.
* If `malloc` fails, `_calloc` also returns `NULL`.

### 3. array_range
Write a function that creates an array of integers.
* **Prototype:** `int *array_range(int min, int max);`
* The array created contains all the values from `min` (inclusive) to `max` (inclusive), ordered from `min` to `max`.
* Return: A pointer to the newly created array.
* If `min` is greater than `max`, the function returns `NULL`.
* If `malloc` fails, it also returns `NULL`.

## Advanced Tasks

### 4. _realloc
Write a function that reallocates a memory block using `malloc` and `free`.

* **Prototype:** `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
* `ptr` is a pointer to the memory previously allocated with a call to `malloc`: `malloc(old_size)`.
* `old_size` is the size, in bytes, of the allocated space for `ptr`.
* `new_size` is the new size, in bytes, of the new memory block.
* The contents will be copied to the newly allocated space, ranging from the start of `ptr` up to the minimum of the old and new sizes.
* If `new_size` > `old_size`, the "added" memory should not be initialized.
* If `new_size` is equal to `old_size`, do not do anything and return `ptr`.
* If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
* If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.
* Don’t forget to free `ptr` when it makes sense.

**FYI:** The standard library provides a different function: `realloc`. Run `man realloc` to learn more.

### 5. We must accept finite disappointment, but never lose infinite hope
Write a program that multiplies two positive numbers.
* **Usage:** `mul num1 num2`
* `num1` and `num2` will be passed in base 10.
* Print the result, followed by a new line.
* If the number of arguments is incorrect, print "Error," followed by a new line, and exit with a status of 98.
* `num1` and `num2` should only be composed of digits. If not, print "Error," followed by a new line, and exit with a status of 98.
* You are allowed to use more than 5 functions in your file.
* You can use `bc` (run `man bc`) to check your results.

These advanced tasks expand your knowledge of memory management and introduce you to a program that performs arithmetic operations on positive numbers.