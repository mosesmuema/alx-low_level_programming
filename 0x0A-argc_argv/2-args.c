#include <stdio.h>
/**
*main-gets code
*@argc:counts number of arguments
*@argv:string of argc arguments
*Return:(0)
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
