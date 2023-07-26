#include "main.h"
/**
 * print_integer - nom de la fonction
 * Description: print une décimale
 * @nombre: nombre
 * Return: retourne la longueur
*/
int print_integer(int nombre)
{
	char afficheur[10];
	int i = 0;
	int count = 0;

	if (nombre == 0)
	count += _putchar('0');

	if (nombre < 0)
	{
		nombre = -(nombre);
		count += _putchar('-');
	}

	while (nombre > 0)
	{
		afficheur[i] = '0' + nombre % 10;
		nombre /= 10;
		i++;
	}
	while (i > 0)
	{
		count += _putchar(afficheur[i - 1]);
		i--;
	}
	return (count);
}
