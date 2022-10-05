#include <stdio.h>
/**
*main-gets code
*@argc:counts number of arguments
*@argv:a string of argc arguments
*Return:always (0)
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
