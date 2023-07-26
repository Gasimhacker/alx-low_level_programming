/**
 * reverse_array - Reverse an array of integers
 * @a: The array to be reversed
 * @n: The number of elemnts of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index = 0, tmp;

	for (index = 0; index < n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}

}
