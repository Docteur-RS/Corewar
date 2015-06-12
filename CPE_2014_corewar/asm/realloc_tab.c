/*
** realloc_tab.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 21:18:28 2014 lancel_e
** Last update Sun Apr 13 22:50:16 2014 lancel_e
*/

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"

void    hugues_func(char **tab)
{
  hugues_simplify_file(tab);
}

int	my_strtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    ++i;
  return (i);
}

void	d_tab_recpy_doc(char **old, char **new, int *i, int *j)
{
  while (old[*i])
    {
      new[*i] = malloc(my_strlen(old[*i]) + 1);
      while (old[*i][*j])
	{
	  new[*i][*j] = old[*i][*j];
	  *j = *j + 1;
	}
      new[*i][*j] = '\0';
      *j = 0;
      *i = *i + 1;
    }
}

char	**realloc_tab(char **v_old, char *add)
{
  char	**new;
  int	i;
  int	j;

  i = 0;
  j = 0;
  new = malloc(sizeof(*v_old) * (my_strtab(v_old)+ 2));
  d_tab_recpy_doc(v_old, new, &i, &j);
  new[i] = malloc(my_strlen(add) + 1);
  j = 0;
  while (add[j])
    {
      new[i][j] = add[j];
      j = j + 1;
    }
  new[i][j] = '\0';
  i = i + 1;
  new[i] = NULL;
  return (new);
}
