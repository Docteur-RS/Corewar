/*
** get_file_name.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:13:10 2014 lancel_e
** Last update Sun Apr 13 23:13:11 2014 lancel_e
*/

#include "all.h"

int	get_file_name(t_manage *man, int argc, char **argv)
{
  if (argc == 1)
    return (-1);
  if (argc >= 2)
    {
      man->f_name->one = argv[1];
      man->is_champion->one = 1;
    }
  if (argc >= 3)
    {
      man->f_name->two = argv[2];
      man->is_champion->two = 1;
    }
  if (get_file_name_continue(man, argc, argv) == -1)
    return (-1);
  return (0);
}

int	get_file_name_continue(t_manage *man, int argc, char **argv)
{
  if (argc >= 4)
    {
      man->f_name->three = argv[3];
      man->is_champion->three = 1;
    }
  if (argc >= 5)
    {
      man->f_name->four = argv[4];
      man->is_champion->four = 1;
    }
  if (is_file_ok(man) == -1)
    return (-1);
  return (0);
}

int	pars_name_file(char *str)
{
  if (my_strlen(str) < 4)
    return (-1);
  if (str[my_strlen(str) - 1] != 'r')
    return (-1);
  if (str[my_strlen(str) - 2] != 'o')
    return (-1);
  if (str[my_strlen(str) - 3] != 'c')
    return (-1);
  if (str[my_strlen(str) - 4] != '.')
    return (-1);
  return (0);
}

int	is_file_ok(t_manage *man)
{
  int	ok;

  ok = 0;
  if (man->is_champion->one == 1)
    if (pars_name_file(man->f_name->one) == -1)
      ok = -1;
  if (man->is_champion->two == 1)
    if (pars_name_file(man->f_name->two) == -1)
      ok = -1;
  if (man->is_champion->three == 1)
    if (pars_name_file(man->f_name->three)== -1)
      ok = -1;
  if (man->is_champion->four == 1)
    if (pars_name_file(man->f_name->four) == -1)
      ok = -1;
  if (ok == -1)
    {
      err_msg(2, "null");
      return (-1);
    }
  return (0);
}
