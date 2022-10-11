#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees any memory allocated by dog.
  * @d: pointer to struct
  *
  * Return: what does it return?
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
