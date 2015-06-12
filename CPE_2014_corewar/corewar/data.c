/*
** data.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:09:31 2014 lancel_e
** Last update Sun Apr 13 23:09:31 2014 lancel_e
*/

#include <unistd.h>
#include <stdlib.h>
#include "all.h"

void	*my_xmalloc_arena(int size)
{
  void	*ptr;

  ptr = malloc(size * sizeof(char));
  if (ptr == NULL)
    {
      my_putstr("Error : Cannot malloc.\n");
      exit(EXIT_FAILURE);
    }
  return (ptr);
}

void	*my_xmalloc(int size)
{
  void	*ptr;

  ptr = malloc(size * sizeof(char *));
  if (ptr == NULL)
    {
      my_putstr("Error : Cannot malloc.\n");
      exit(EXIT_FAILURE);
    }
  return (ptr);
}

void	xfree_doc(void *var)
{
  if (var)
    free(var);
}

void	my_memset(char *str, int len)
{
  int	i;

  i = 0;
  str[len - 1] = '\0';
  while (i <= (len - 1))
    {
      str[i] = '\0';
      i = i + 1;
    }
}
