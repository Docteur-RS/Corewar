/*
** get_code.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:10:34 2014 lancel_e
** Last update Sun Apr 13 23:12:39 2014 lancel_e
*/

#include "all.h"

int	get_code_one(t_manage *man)
{
  int	i;
  int	j;
  int	right_len;

  man->arena->len_code_one = man->f_name->size_one - 2180;
  man->one->code = my_xmalloc(man->arena->len_code_one);
  i = 2180;
  j = 0;
  while (i < man->f_name->size_one)
    {
      man->one->code[j] = man->file->one[i];
      i = i + 1;
      j = j + 1;
    }
  return (0);
}

int	get_code_two(t_manage *man)
{
  int	i;
  int	j;
  int	right_len;

  man->arena->len_code_two = man->f_name->size_two - 2180;
  man->two->code = my_xmalloc(man->arena->len_code_two);
  i = 2180;
  j = 0;
  while (i < man->f_name->size_two)
    {
      man->two->code[j] = man->file->two[i];
      i = i + 1;
      j = j + 1;
    }
  return (0);
}

int	get_code_three(t_manage *man)
{
  int	i;
  int	j;
  int	right_len;

  man->arena->len_code_three = man->f_name->size_three - 2180;
  man->three->code = my_xmalloc(man->arena->len_code_three);
  i = 2180;
  j = 0;
  while (i < man->f_name->size_three)
    {
      man->three->code[j] = man->file->three[i];
      i = i + 1;
      j = j + 1;
    }
  return (0);
}

int	get_code_four(t_manage *man)
{
  int	i;
  int	j;
  int	right_len;

  man->arena->len_code_four = man->f_name->size_four - 2180;
  man->four->code = my_xmalloc(man->arena->len_code_four);
  i = 2180;
  j = 0;
  while (i < man->f_name->size_four)
    {
      man->four->code[j] = man->file->four[i];
      i = i + 1;
      j = j + 1;
    }
  return (0);
}
