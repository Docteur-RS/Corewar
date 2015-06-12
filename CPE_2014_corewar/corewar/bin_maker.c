/*
** bin_maker.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:08:41 2014 lancel_e
** Last update Sun Apr 13 23:08:42 2014 lancel_e
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "all.h"

int	bin_manager(t_manage *man, char **argv)
{
  int	ret;
  int	size;

  if (man->is_champion->one == 1)
    {
      if (bin_manager_first_part(man, argv) == -1)
	return (-1);
    }
  if (man->is_champion->two == 1)
    {
      if (bin_manager_second_part(man, argv) == -1)
	return (-1);
    }
  if (bin_manager_continue(man, argv, ret) == -1)
    return (-1);
  return (0);
}

int	bin_manager_continue(t_manage *man, char **argv, int ret)
{
  if (man->is_champion->three == 1)
    {
      if (bin_manager_continue_first_part(man, argv, ret) == -1)
	return (-1);
    }
  if (man->is_champion->four == 1)
    {
      if (bin_manager_continue_second_part(man, argv, ret) == -1)
	return (-1);
    }
  get_info(man);
  return (0);
}
