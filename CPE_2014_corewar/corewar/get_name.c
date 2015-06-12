/*
** get_name.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:13:46 2014 lancel_e
** Last update Sun Apr 13 23:13:47 2014 lancel_e
*/

#include "all.h"

void	get_name_one(t_manage *man)
{
  int	i;
  int	j;

  i = 4;
  j = 0;
  while (man->file->one[i])
    i = i + 1;
  man->one->name = my_xmalloc(i + 1);
  i = 4;
  while (man->file->one[i])
    {
      man->one->name[j] = man->file->one[i];
      i = i + 1;
      j = j + 1;
    }
  man->one->name[j] = '\0';
}

void	get_name_two(t_manage *man)
{
  int	i;
  int	j;

  i = 4;
  j = 0;
  while (man->file->two[i])
    i = i + 1;
  man->two->name = my_xmalloc(i + 1);
  i = 4;
  while (man->file->two[i])
    {
      man->two->name[j] = man->file->two[i];
      i = i + 1;
      j = j + 1;
    }
  man->two->name[j] = '\0';
}

void	get_name_three(t_manage *man)
{
  int	i;
  int	j;

  i = 4;
  j = 0;
  while (man->file->three[i])
    i = i + 1;
  man->three->name = my_xmalloc(i + 1);
  i = 4;
  while (man->file->three[i])
    {
      man->three->name[j] = man->file->three[i];
      i = i + 1;
      j = j + 1;
    }
  man->three->name[j] = '\0';
}

void	get_name_four(t_manage *man)
{
  int	i;
  int	j;

  i = 4;
  j = 0;
  while (man->file->four[i])
    i = i + 1;
  man->four->name = my_xmalloc(i + 1);
  i = 4;
  while (man->file->four[i])
    {
      man->four->name[j] = man->file->four[i];
      i = i + 1;
      j = j + 1;
    }
  man->four->name[j] = '\0';
}
