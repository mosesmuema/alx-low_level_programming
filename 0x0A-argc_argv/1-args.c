#include <stdio.h>
/**
*main-gets code
*@argc:counts number of arguments
*@argv:a string of argc arguments
*Return:always (0)
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%d\n", count);
	}
	return (0);
}
