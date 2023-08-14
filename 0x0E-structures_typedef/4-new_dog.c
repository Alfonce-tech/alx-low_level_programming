#include <stdlib.h>
#include "dog.h"
/**
* _strlen - ...
* @s: ....
*
* Return: ...
*/
int _strlen(char *s)
{
int j;
j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
/**
* *_strcpy - ..
* @dest:....

 * @src: ....
 * Return: ....
*/
char *_strcpy(char *dest, char *src)
{
int jin, j;
jin = 0;
while (src[jin] != '\0')
{
jin++;
}
for (j = 0; j < jin;  j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
* new_dog - ....
* @name: .,...
* @age: ...
* @owner: ....
* Return:...
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *hen;
int jin1, jin2;

jin1 = _strlen(name);
jin2 = _strlen(owner);

hen = malloc(sizeof(dog_t));
if (hen == NULL)
return (NULL);
hen->name = malloc(sizeof(char) * (jin1 + 1));
if (hen->name == NULL)
{
free(hen);
return (NULL);
}
hen->owner = malloc(sizeof(char) * (jin2 + 1));
if (hen->owner == NULL)
{
free(hen);
free(hen->name);
return (NULL);
}
_strcpy(hen->name, name);
_strcpy(hen->owner, owner);
hen->age = age;
return (hen);
}
