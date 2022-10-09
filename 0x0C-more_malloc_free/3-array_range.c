#include "main.h"
#include <stdlib.h>
/**
*array_range-prints aray of integers
*@min:minimum array integer to start count
*@max:final integer
*Return: (0)
*/
int *array_range(int min, int max)
{
	int y, n;
	int *array;

	if (min > max)
		return (NULL);
	y = (max - min) + 1;

	array = malloc(sizeof(int) * y);
	if (array == NULL)
		return (NULL);
	for (n = 0; n < y; n++)
		array[n] = min++;
	return (array);


}
