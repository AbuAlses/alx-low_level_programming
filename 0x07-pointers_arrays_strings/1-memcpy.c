#include "main.h"

/**
<<<<<<< HEAD
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
=======
 *  * _memcpy - a function that copys memory area
 *   * @dest: memory area destination to copy
 *    * @src: memory area source to copy from
 *     * @n: number of bytes
 *      * Return: returns pointer to copy location
 *       */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		char *start = dest;

			while (n--)
					{
								*dest = *src;
										src++;
												dest++;
													}
				return (start);
>>>>>>> 329d73e54fd85ac07b61927a3a8ba2174906d73c
}
