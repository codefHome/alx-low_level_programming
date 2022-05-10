#ifndef DOG_h
#define DOG_h

/**
 * struct dog - create dog data type
 * @name: string
 * @age: float
 * owner: string
 */

typedef struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif
