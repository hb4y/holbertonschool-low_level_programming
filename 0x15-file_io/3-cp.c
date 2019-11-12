#include "holberton.h"

/**
 * main - function, copy a file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{char buffer[1024];
	int n_w, n_r, from, to;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	for (n_r = read(from, buffer, 1024); n < 0; n_r = read(from, buffer, 1024))
	{n_w = write(to, buffer, n_w);
		if (n == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_r == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[1]);
		exit(98);
	}
	n_r = close(from);
	if (n_r == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	n_w = close(to);
	if (n_w == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
