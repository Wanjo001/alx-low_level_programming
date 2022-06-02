#include <stdio.h>
/**
 * main - return integral of 0
 *
 * Description:print the size of different characters and words
 *
 * Return:Always success return 0
 *
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
}
