# ifndef _SAMPLE
# define _SAMPLE
/**
 * struct dog - information about dogs
 * @age: age of dog
 * @owner: owner of dog
 * @name: name dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
