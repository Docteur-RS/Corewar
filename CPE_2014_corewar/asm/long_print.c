/*
** long_print.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 21:16:23 2014 lancel_e
** Last update Sun Apr 13 21:16:24 2014 lancel_e
*/

#include "corewar.h"

char		*long_print_reverseinitialize(char *result)
{
  unsigned char	temp;

  temp = 0;
  while (0 == 0)
    {
      *result = '\0';
      if (temp == 255)
	break;
      temp = temp + 1;
      result = result + 1;
    }
  return (result);
}

long		long_print_signprint(long number, char more, char less)
{
  if (number > 0)
    char_print(more);
  if (number < 0)
    {
      char_print(less);
      number = number * (-1);
    }
  return (number);
}

unsigned char	long_print_baseverify(char *base)
{
  unsigned char	temp;

  temp = 0;
  while (*base != '\0')
    {
      temp = temp + 1;
      base = base + 1;
    }
  return (temp);
}

void		long_print(long number, char *base, char more, char less)
{
  unsigned char	length_base;
  char		*result;

  if ((result = malloc(sizeof(char) * 255)) != NULL)
    {
      result = long_print_reverseinitialize(result);
      length_base = long_print_baseverify(base);
      if ((length_base = long_print_baseverify(base)) >= 2)
	{
	  number = long_print_signprint(number, more, less);
	  while (number != 0)
	    {
	      *result = base[(number - ((number / length_base) * length_base))];
	      result = result - 1;
	      number = number / length_base;
	    }
	  result = result + 1;
	  while (*result != '\0')
	    {
	      char_print(*result);
	      result = result + 1;
	    }
	}
    }
}
