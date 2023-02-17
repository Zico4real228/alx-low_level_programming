#include <stdio.h>
<<<<<<< HEAD

/**
*main -Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
=======
/**
 *  main Entry
 *  Return: Always 0
 */
int main(void)
{
	printf("Size of a chart: %i byte(s)\n", sizeof(char));
	printf("Size of a chart: %i byte(s)\n", sizeof(int));
	printf("Size of a chart: %i byte(s)\n", sizeof(long int));
	printf("Size of a chart: %i byte(s)\n", sizeof(long long int));
	printf("Size of a chart: %i byte(s)\n", sizeof(float));
>>>>>>> e1a1fb4 (6-size.c)
	return (0);
}
