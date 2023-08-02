/**
 * _pow_recursion - a function that returns the value of x raised to
 * the power of y
 *
 * @x: a integer to be raised to power y
 * @y: a integer, the power
 *
 * Return: x raised to power y, x ** y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y -= 1;
	return (x * _pow_recursion(x, y));
}
