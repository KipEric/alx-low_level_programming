#include "main.h"
 /**
  * main - print alphabet.
  * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
  * Return: 0
  */
void print_alphabet(void)
{
	char b;
	
	for (b = 'a'; b <= 'z'; b++)
		_putchar(b);

	_putchar('\n');
}
