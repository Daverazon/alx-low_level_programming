#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type that declares the template for creating dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);

#endif /*DOG_H*/
