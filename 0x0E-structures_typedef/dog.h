#ifndef DOG_H
#define DOG_H


/**
 * struct dog - This struct provide some of the dogs details
 *		such as there names, age and the owner name
 * @name: The name of the dog
 * @owner: The owner of the dog
 * @age : The age of the dog
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};


/**
 * init_dog - Initialize a variable of type struct dog
 * @d: The variable to be initialized
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
