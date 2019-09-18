#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Alwiays 0 (Success)c
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, sizeof(str)-1);
	return (1);
}
