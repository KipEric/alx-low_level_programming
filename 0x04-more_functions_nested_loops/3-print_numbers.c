/**
 * print_numbers - prints the digits 1-9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');

	_putchar('\n');
}
