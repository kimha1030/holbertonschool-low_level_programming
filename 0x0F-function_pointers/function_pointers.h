#ifndef HOLBERTON
#define HOLBERTON

void print_name(char *name, void (*f)(char *));
typedef __SIZE_TYPE__ size_t;
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
