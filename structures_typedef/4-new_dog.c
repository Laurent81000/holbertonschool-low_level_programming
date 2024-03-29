#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/**
	 * Iitier les tableaux pour stocker
	 * les copies de name, owner et 
	 * créer le nouveau dog
	 */	
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	/**
	 * Espace mémoire alloué pour type dog_t
	 * qui initie le pointeur dog avec l'&
	 * mémoire allouée, sinon NULL
	 */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Store a copy of name */
	name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	/* Store a copy of owner */
	owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner_copy == NULL)
	{
		free(dog);
		free(name_copy);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/**
	 * Structure de données "dog"
	 * copie le nom et assigne une valeur
	 */
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}


OU


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *copy_name, *copy_owner;
	int i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	copy_name = malloc(sizeof(name));
	if (copy_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		copy_name[i] = name[i];
	copy_name[i] = '\0';

	copy_owner = malloc(sizeof(owner));
	if (copy_owner == NULL)
	{
		free(new_dog);
		free(copy_name);
		return (NULL);
	}

	for (i = 0; owner[i]; i++)
		copy_owner[i] = owner[i];
	copy_owner[i] = '\0';

	init_dog(new_dog, copy_name, age, copy_owner);

	return (new_dog);
}
