#include "main.h"

/**
 * _pow_recursion - calculate x power to y
 * @x: base integer number
 * @y: power integer number
 * Return: x power to y result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, (y - 1)));
}
