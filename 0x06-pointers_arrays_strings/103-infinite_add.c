#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0, l = 0, m = 0;

    while (n1[i] != '\0')
        i++;
    while (n2[j] != '\0')
        j++;
    if (i > size_r || j > size_r)
        return (0);
    for (i--, j--, k = 0; k < size_r - 1 && (i >= 0 || j >= 0); i--, j--, k++)
    {
        l = m;
        if (i >= 0)
            l += n1[i] - '0';
        if (j >= 0)
            l += n2[j] - '0';
        if (l > 9)
        {
            m = 1;
            r[k] = l - 10 + '0';
        }
        else
        {
            m = 0;
            r[k] = l + '0';
        }
    }
    if (m != 0 || i >= 0 || j >= 0 || k == size_r - 1)
        return (0);
    r[k] = '\0';
    for (i = 0, --k; i < k; i++, k--)
    {
        l = r[i];
        r[i] = r[k];
        r[k] = l;
    }
    return (r);
}
