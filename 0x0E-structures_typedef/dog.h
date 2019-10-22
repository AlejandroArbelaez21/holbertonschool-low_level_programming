#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: name if member
 * @age: age of member
 * @owner: owner of member
 *
 * Description: description of my dog Django
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog_t - Short description
 * @name: name if member
 * @age: age of member
 * @owner: owner of member
 *
 * Description: description of my dog Django
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
