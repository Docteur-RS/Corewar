/*
** get_comment.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:12:59 2014 lancel_e
** Last update Sun Apr 13 23:13:00 2014 lancel_e
*/

#include "all.h"

void	get_comment(t_manage *man)
{
  if (man->is_champion->one == 1)
    get_comment_one(man);
  if (man->is_champion->two == 1)
    get_comment_two(man);
  if (man->is_champion->three == 1)
    get_comment_three(man);
  if (man->is_champion->four == 1)
    get_comment_four(man);
}

void	get_comment_one(t_manage *man)
{
  int	i;
  int	j;

  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->one[i])
    {
      ++i;
      ++j;
    }
  man->one->comment = my_xmalloc(j + 1);
  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->one[i])
    {
      man->one->comment[j] = man->file->one[i];
      ++i;
      ++j;
    }
  man->one->comment[j] = '\0';
}

void	get_comment_two(t_manage *man)
{
  int	i;
  int	j;

  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->two[i])
    {
      ++i;
      ++j;
    }
  man->two->comment = my_xmalloc(j + 1);
  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->two[i])
    {
      man->two->comment[j] = man->file->two[i];
      ++i;
      ++j;
    }
  man->two->comment[j] = '\0';
}

void	get_comment_three(t_manage *man)
{
  int	i;
  int	j;

  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->three[i])
    {
      ++i;
      ++j;
    }
  man->three->comment = my_xmalloc(j + 1);
  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->three[i])
    {
      man->three->comment[j] = man->file->three[i];
      ++i;
      ++j;
    }
  man->three->comment[j] = '\0';
}

void	get_comment_four(t_manage *man)
{
  int	i;
  int	j;

  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->four[i])
    {
      ++i;
      ++j;
    }
  man->four->comment = my_xmalloc(j + 1);
  i = PROG_NAME_LENGTH + 4;
  j = 0;
  while (man->file->four[i])
    {
      man->four->comment[j] = man->file->four[i];
      ++i;
      ++j;
    }
  man->four->comment[j] = '\0';
}
