#include "main.h"
/**
 * string_length - determines length of string
 * @string: input string
 * Return: string length
 */
int string_length(char *string)
{
	int length = 0;

	if (*(string + length))
	{
		length++;
		length += string_length(string + length);
	}
	return (length);
}
/**
 * palindrome_check - determines if string is a palindrome
 * @string: input string
 * @length: length of string
 * @count: number of string being checked
 * Return: 1 if string is palindrome, otherwise 0
 */
int palindrome_check(char *string, int length, int count)
{
	if (string[count] == string[length / 2])
		return (1);
	if (string[count] == string[length - count - 1])
		return (palindrome_check(string, length, count + 1));
	return (0);
}
/**
 * is_palindrome - determines if string is a palindrome
 * @s: input string
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = string_length(s);
	int count = 0;

	if (!(*s))
		return (1);
	return (palindrome_check(s, length, count));
}
