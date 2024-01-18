# 0x0C-more_malloc_free

## 0. Trust no one (0-malloc_checked.c)

File: 0-malloc_checked.c

Write a function `malloc_checked` that allocates memory using `malloc`. The function returns a pointer to the allocated memory. If `malloc` fails, the function causes the program to terminate with a status value of 98.

## 1. string_nconcat (1-string_nconcat.c)

File: 1-string_nconcat.c

Write a function `string_nconcat` that concatenates two strings. The returned pointer points to a newly allocated space in memory, containing `s1` followed by the first `n` bytes of `s2`, and null-terminated. If the function fails, it returns NULL. If `n` is greater or equal to the length of `s2`, then use the entire string `s2`. If NULL is passed, treat it as an empty string.

## 2. _calloc (2-calloc.c)

File: 2-calloc.c

Write a function `_calloc` that allocates memory for an array using `malloc`. The function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is 0, then `_calloc` returns NULL. If `malloc` fails, it also returns NULL.

## 3. array_range (3-array_range.c)

File: 3-array_range.c

Write a function `array_range` that creates an array of integers. The array contains all values from `min` to `max`, ordered from `min` to `max`. The function returns a pointer to the newly created array. If `min` is greater than `max`, return NULL. If `malloc` fails, return NULL.

## 4. _realloc (100-realloc.c)

File: 100-realloc.c

Write a function `_realloc` that reallocates a memory block using `malloc` and `free`. The function takes a pointer to the memory previously allocated with `malloc`, the old size, and the new size. It copies the contents to the newly allocated space, up to the minimum of the old and new sizes. If `new_size` > `old_size`, the added memory is not initialized. If `new_size` == `old_size`, do nothing and return the pointer. If `ptr` is NULL, it's equivalent to `malloc(new_size)`. If `new_size` is 0 and `ptr` is not NULL, it's equivalent to `free(ptr)`.

## 5. We must accept finite disappointment, but never lose infinite hope (101-mul.c)

File: 101-mul.c

Write a program that multiplies two positive numbers. Usage: `mul num1 num2`. Numbers will be passed in base 10. Print the result, followed by a new line. If the number of arguments is incorrect or if `num1` or `num2` is not a number, print "Error" and exit with a status of 98. You can use more than 5 functions in your file. Use `bc` to check your results.

