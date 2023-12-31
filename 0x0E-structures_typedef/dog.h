#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * dog - alias for dog
 * Description: information about dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog_t - alias for dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *str);
void free_dog(dog_t *d);


#endif
