/*
** print_func.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:36:31 2014 lancel_e
** Last update Sun Apr 13 23:36:33 2014 lancel_e
*/

#include "corewar.h"

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	print_no_such_file(char *str)
{
  my_putstr("corewar: ");
  my_putstr(str);
  my_putstr(": No such file or directory\n");
}
