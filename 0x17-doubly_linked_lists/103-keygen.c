#include <stdio.h>
#include <string.h>
/**
 * main - keygen for crackme5
 * @argc: count of arguments
 * @argv: arguments pass to the keygen
 * Return: 0 on sucess
 */
int main(int argc, char **argv)
{
	char *ki = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	size_t us = strlen(argv[1]);
	int i = argc, aux;
	char f1, f2, f3, f4, f5, f6;

	f1 = ki[(us ^ 0x3b) & 0x3f], i = 0;
	while (i < us)
	{aux += argv[1][i];
		i++;
	}
	f2 = ki[((aux ^ 0x4f) & 0x3f)];
	i = 0, aux = 1;
	while (i < us)
	{aux *= argv[1][i];
		i++;
	}
	f3 = ki[(aux ^ 0x55) & 0x3f];
	for (i = 0, aux = argv[1][0]; i < us; i++)
	{
		if (argv[1][i] > aux)
			aux = argv[1][i];
	}
	srand(aux ^ 0xe);
	f4 = ki[rand() & 0x3f];
	i = 0, aux = 0;
	while (i < us)
	{
		aux += argv[1][i] * argv[1][i];
		i++;
	}
	f5 = ki[(aux ^ 0xef) & 0x3f];
	i = 0, aux = 0;
	while (i < argv[1][0])
	{
		aux = rand();
		i++;
	}
	f6 = ki[(aux ^ 0xe5) & 0x3f];
	printf("%c%c%c%c%c%c", f1, f2, f3, f4, f5, f6);
	return (0);
}
