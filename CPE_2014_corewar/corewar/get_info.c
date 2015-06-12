/*
** get_info.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:13:33 2014 lancel_e
** Last update Sun Apr 13 23:13:33 2014 lancel_e
*/

#include "all.h"

void	get_info(t_manage *man)
{
  if (man->is_champion->one == 1)
    {
      get_name_one(man);
      get_comment_one(man);
      get_code_one(man);
    }
  if (man->is_champion->two == 1)
    {
      get_name_two(man);
      get_comment_two(man);
      get_code_two(man);
    }
  get_info_2(man);
}

void	get_info_2(t_manage *man)
{
  if (man->is_champion->three == 1)
    {
      get_name_three(man);
      get_comment_three(man);
      get_code_three(man);
    }
  if (man->is_champion->four == 1)
    {
      get_name_four(man);
      get_comment_four(man);
      get_code_four(man);
    }
  manage_load_champion(man);
  master_pars(man);
}
