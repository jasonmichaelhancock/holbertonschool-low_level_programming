#include <stdio.h>
#include "dog.h"


/**
 * _strlen - find string length
 * @s: the array value                                                                                       
 *                                                                                                           
 * Return: Always 0.                                                                                         
 */
int _strlen(char *s)
{
        int length;

        for (length = 0; s[length] != '\0'; length++)
        {

        }
        return (length);
}
/**                                                                                                          
 * _strcpy - swap string into address                                                                        
 * @dest: destination                                                                                        
 * @src: source.                                                                                             
 *                                                                                                           
 * Return: dest.                                                                                             
 */
char *_strcpy(char *dest, char *src)
{
        int i = 0;

        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
/**                                                                                                          
 * new_dog - Creates a new struct.                                                                           
 * @name: The dog name.                                                                                      
 * @age: Dog's age in float.                                                                                 
 * @owner: the dog's owner.                                                                                  
 *                                                                                                           
 * Return: pointer to struct..                                                                               
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *new_dog;
        char *new_name;
        char *new_owner;

        new_dog = malloc(sizeof(dog_t));
        if (new_dog == NULL)
                return (NULL);
        new_name = malloc(sizeof(char) * _strlen(name) + 1);
        if (new_name == NULL)
        {
                free(new_dog);
                return (NULL);
        }
        new_owner = malloc(sizeof(char) * _strlen(owner) + 1);
        if (new_owner == NULL)
        {
                free(new_name);
                free(new_dog);
                return (NULL);
        }
        _strcpy(new_name, name);
        _strcpy(new_owner, owner);
        new_dog->name = new_name;
        new_dog->age = age;
        new_dog->owner = new_owner;
        return (new_dog);
}
