#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct dog definition
 * @name: 1st  member of struct dog
 * @age: Second membe of struct  dog
 * @owner: Third member of struct dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);


#endif

