#include <stdlib.h>
#include "dog.h"
/**
* _strlen - length of string to return
* @s: string to be evaluated
* Return: returns string length
*/
int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * *_strcpy -to  copy the string pointed to by src
 * including the terminating null char (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: string that needs  to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, y;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (y = 0; y < l; y++)
	{
		dest[y] = src[y];
	}
		dest[y] = '\0';

		return (dest);
	}

/**
* new_dog - creating a new dog
* @name: the dog name
* @age:the dog age
* @owner:the dog owner
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

