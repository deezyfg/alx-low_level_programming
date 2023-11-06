#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: Dog structure to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
