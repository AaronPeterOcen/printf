#include "main.h"

/**
 * init_buffer - Initialize the buffer
 * Description: Function to initialize the buffer
 * Return: A pointer to the buffer
 */
char *init_buffer()
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer)
		buffer = flush_buffer(buffer);
	return (buffer);
}

/**
 * add_buffer - Adds a character to the buffer
 * Description: Function to add a character to the buffer
 * @buffer: Buffer to add the character
 * @s: Character to add
 * Return: Size of the buffer
 */
int add_buffer(char *buffer, char s)
{
	int a;

	a = buffer_position(buffer);

	if (i < 1023)
		*(buffer + i) = s;
	else
	{
		print_buffer(buffer, 1023);
		buffer = flush_buffer(buffer);
		buffer[0] = s;
	}
	return (a);
}
/**
 * flush_buffer - Flush the buffer
 * Description: Function to flush the buffer
 * @buffer: Buffer to flush
 * Return: A pointer to the buffer
 */
char *flush_buffer(char *buffer)
{
	int i = 0;

	for (; i < 1023; i++)
	{
		buffer[i] = 0;
	}
	return (buffer);
}
/**
 * print_buffer - Prints the buffer
 * Description: Function to print the buffer
 * @buffer: Buffer to print
 * @size: Size of the buffer
 * Return: A pointer to the buffer
 */
void print_buffer(char *buffer, int size)
{
	write(1, buffer, size);
}
/**
 * buffer_position - Position of the buffer
 * Description: Function to know the length of the buffer
 * @buffer: Buffer to find the length
 * Return: Length of the buffer
 */
int buffer_position(char *buffer)
{
	int post = 0;
	char *p = buffer;

	for (; (*(p + post) != '\0'); post++)
		;
	return (post);
}
