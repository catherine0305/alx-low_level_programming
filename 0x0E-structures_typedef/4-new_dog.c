#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - finds the length of a string
 * @str: string to measure
 * Return: the length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcpy - copies a string pointed to by src
 * @dest: buffer storing string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	dogg->name = _strcpy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcpy(dogg->owner, owner);
	return (dogg);
}
