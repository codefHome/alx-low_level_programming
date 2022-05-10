#ifndef _DOG_h
#define _DOG_h

/**
 * struct dog - create dog data type
 * @name: string
 * @age: float
 * owner: string
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


