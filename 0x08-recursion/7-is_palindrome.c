#include "holberton.h"
/**
 * nprime - function that evaluate if a number is a
 * prime number
 * @n: number integer
 * @x: number integer
 * Return: int
 */
int function1(char *s, int m, int n)
{
	if (m < n)
	{
		if (s[m] == s[n])
		{
			return (function1(s, m + 1, n - 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}

}

/**
 * nprime - function that evaluate if a number is a
 * prime number
 * @n: number integer
 * @x: number integer
 * Return: int
 */

int function2 (char *str)
{
	size_t len = strlen(str);
    int res;
    if(len < 2) {
        return 1;                   // cannot shorten: must be success
    }
    if(str[0] != str[len - 1]) {    // make palindrome test
        return 0;
    }

    str[len - 1] = '\0';            // shorten the string at the back
    res = palindrom(str + 1);       // recurse woth string shortened at the front
    str[len - 1] = str[0];          // replace last char (we know it's the same)
    return res;
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string.
 * Return: int
 */
int is_palindrome(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		return (function2(s, 0, n - 1));
	}
	else
	{
		return (1);
	}
}
