#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define data for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Source: PDF, Doc Holberton, personal manual
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/* sert à l'exercice suivant */

#endif
