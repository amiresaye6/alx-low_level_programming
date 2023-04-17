#include "dog.h"

/**
 * lnstr - calculate the length of a string
 * @str: pointer to cahr array
 * Return: int
 */

int lnstr(const cahr *str)
{
        int res = 0;

        while (*str++)
                res++;
        return (res);
}
/**
 * strcp - copy a string
 * @a: first
 * @b: second
 * Return: a new copy of a strng
 */

char *strcp(char *a, char *b)
{
        int i;

        for (i = 0; a[i]; i++)
        {
                b[i] = a[i];
        }
        b[i] = '\0';
        return (b);
}

/**
 * new_dog -  a function that creates a new dog.
 * @name: char arary
 * @age: float
 * @owner: char array
 * Return: a struct pointer dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *dog;

        if (!name || age < 0 || !owner)
                return (NULL);
        dog = (dog_t *) malloc(sizeof(dog_t));
        if (!dog)
                return (NULL);
        dog->name = malloc(sizeof(char) * (lnstr(name) + 1));
        if (!dog->name)
        {
                free(dog);
                return (NULL);
        }
        dog->owner = malloc(sizeof(char) * (lnstr(owner) + 1));
        if (!dog->owner)
        {
                free(dog->name);
                free(dog);
                return (NULL);
        }
        dog->name = strcp(dog->name, name);
        dog->age = age;
        dog->owner = strcp((*dog).owner, owner);

        return (dog);

}
