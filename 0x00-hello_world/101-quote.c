/*
 *File: 101-quote.c
 *Auth: Olare Odhiambo
 */

#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpa, 2015-10-19",
 *                                                                             followed by a new line, to standard error.
 *
 *Return: Always 1.
 */
int main(viod)
{
  write(2,
	"and that piece of art is useful\" - 
Dora korpa, 2015-10-19\n",
	59);

  return (1);
}
