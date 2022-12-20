/**
 * swap_int - takes pointers to two int and swap thier values
 * @a: first int pointer address
 * @b: second int pointer address
 *
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
