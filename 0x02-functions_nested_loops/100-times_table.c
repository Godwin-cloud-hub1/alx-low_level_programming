#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom putchar function implementation
 * @c: The character to be printed
 * Return: On success, returns the character printed.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}

/**
 * print_times_table - Print the times table for n.
 * @n: Table size (0 to 15)
 * Return: Nothing.
 */
void print_times_table(int n)
{
        int i, j, res;

        if (!(n > 15 || n < 0))
        {
                for (i = 0; i <= n; i++)
                {
                        for (j = 0; j <= n; j++)
                        {
                                res = (i * j);
                                if (j != 0)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
                                if (res < 10 && j != 0)
                                {
                                        _putchar(' ');
                                        _putchar(' ');
                                        _putchar((res % 10) + '0');
                                }
                                else if (res >= 10 && res < 100)
                                {
                                        _putchar(' ');
                                        _putchar((res / 10) + '0');
                                        _putchar((res % 10) + '0');
                                }
                                else if (res >= 100 && j != 0)
                                {
                                        _putchar((res / 100) + '0');
                                        _putchar((res / 10) % 10 + '0');
                                        _putchar((res % 10) + '0');
                                }
                                else
                                        _putchar((res % 10) + '0');
                        }
                        _putchar('\n');
                }
        }
}

