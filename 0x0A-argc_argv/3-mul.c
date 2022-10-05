#include <stdlib.h>
#include <stdio.h>
/**
*main-gets code
*@argc:counts arguments in commandline
*@argv:string with argc arguments
*Return:(0)
*/
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
