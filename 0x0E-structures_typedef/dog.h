#ifndef DOG_H
#define DOG_H

/**
 * struct dog -information about  the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 * dog_t - typedef struct (dog)
 * Description: Information about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

typedef struct dog dog_t;

/**
 * Function prototypes
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
