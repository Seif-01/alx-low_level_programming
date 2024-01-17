# Project: alx-low_level_programming - 0x0B-malloc_free

## File 0-create_array.c

### Task: Float like a butterfly, sting like a bee

Write a function `create_array` that creates an array of chars and initializes it with a specific char.

- **Prototype:** `char *create_array(unsigned int size, char c);`
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

## File 1-strdup.c

### Task: The woman who has no imagination has no wings

Write a function `*_strdup` that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

- **Prototype:** `char *_strdup(char *str);`
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

## File 2-str_concat.c

### Task: He who is not courageous enough to take risks will accomplish nothing in life

Write a function `str_concat` that concatenates two strings.

- **Prototype:** `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- If NULL is passed, treat it as an empty string
- The function should return NULL on failure

## File 3-alloc_grid.c

### Task: If you even dream of beating me you'd better wake up and apologize

Write a function `alloc_grid` that returns a pointer to a 2 dimensional array of integers.

- **Prototype:** `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

## File 4-free_grid.c

### Task: It's not bragging if you can back it up

Write a function `free_grid` that frees a 2 dimensional grid previously created by your `alloc_grid` function.

- **Prototype:** `void free_grid(int **grid, int height);`

## File 100-argstostr.c

### Task: It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe (Advanced)

Write a function `argstostr` that concatenates all the arguments of your program.

- **Prototype:** `char *argstostr(int ac, char **av);`
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument should be followed by a \n in the new string

## File 101-strtow.c

### Task: I will show you how great I am (Advanced)

Write a function `strtow` that splits a string into words.

- **Prototype:** `char **strtow(char *str);`
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be NULL
- Words are separated by spaces
- Returns NULL if str == NULL or str == ""
- If your function fails, it should return NULL
