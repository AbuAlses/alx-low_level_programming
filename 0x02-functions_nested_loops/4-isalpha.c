/**
 * _isalpha - Check alpha
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
if (c >= 'a' || c >= 'A' || c >= 0 || c <= 'z' || c <= 'Z' || c <= 9)
{
return (1);
}
else
{
return (0);
}}
