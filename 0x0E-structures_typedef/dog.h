#ifndef HOLBERTON
#define HOLBERTON
/**
 * struct dog - Structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Exercise zero, structure dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
