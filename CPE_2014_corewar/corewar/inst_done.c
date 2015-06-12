/*
** inst_done.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:14:04 2014 lancel_e
** Last update Sun Apr 13 23:14:05 2014 lancel_e
*/

#include "all.h"

void	get_type(t_manage *man, int *t1, int *t2, int nb)//pas declaré
{
  if (nb == 1)
    {
      *t1 = hugues_get_parameters(man->arena->arena[man->one->pc], 1);
      *t2 = hugues_get_parameters(man->arena->arena[man->one->pc], 2);
    }
  if (nb == 2)
    {
      *t1 = hugues_get_parameters(man->arena->arena[man->two->pc], 1);
      *t2 = hugues_get_parameters(man->arena->arena[man->two->pc], 2);
    }
  if (nb == 3)
    {
      *t1 = hugues_get_parameters(man->arena->arena[man->three->pc], 1);
      *t2 = hugues_get_parameters(man->arena->arena[man->three->pc], 2);
    }
  if (nb == 4)
    {
      *t1 = hugues_get_parameters(man->arena->arena[man->four->pc], 1);
      *t2 = hugues_get_parameters(man->arena->arena[man->four->pc], 2);
    }
}

int	add_inst(t_manage *man, int nb)//pas oublié return nb de cycle
{
  int	type1;
  int	type2;
  int	type3;
  int	final1;
  int	final2;

  get_type(man, &type1, &type2, nb);
  move_pc(man, nb, 4);
  for_final_one(man, nb, &final1, type1);
  move_pc(man, nb, 4);
  for_final_two(man, nb, &final2, type2);
  move_pc(man, nb, 4);
  add_end(man, nb, final1, final2);
  move_pc(man, nb, 4);
  return (10);
}

int	has_live(t_manage *man, char inst, int nb)
{
  if (inst == 1)
    {
      live_inst(man, nb);
      return (10);
    }
  return (-1);
}

void	live_progress_move_pc(t_manage *man, int nb)
{
  if (nb == 1 && man->is_champion->one == 1)
    man->one->live_in_progress = 1;
  else if (nb == 2 && man->is_champion->two == 1)
    man->two->live_in_progress = 1;
  else if (nb == 3 && man->is_champion->three == 1)
    man->three->live_in_progress = 1;
  else if (nb == 4 && man->is_champion->four == 1)
    man->four->live_in_progress = 1;
  if (nb == 1 && man->is_champion->one == 1)
    man->one->pc = man->one->pc + 1;
  else if (nb == 2 && man->is_champion->two == 1)
    man->two->pc = man->two->pc + 1;
  else if (nb == 3 && man->is_champion->three == 1)
    man->three->pc = man->three->pc + 1;
  else if (nb == 4 && man->is_champion->four == 1)
    man->four->pc = man->four->pc + 1;
}

void	live_inst(t_manage *man, int nb)
{
  int	res;
  int	octet;

  live_progress_move_pc(man, nb);
  if (man->is_champion->one == 1)
    res = hugues_create_int(&man->arena->arena[man->one->pc]);
  if (man->is_champion->two == 1)
    res = hugues_create_int(&man->arena->arena[man->two->pc]);
  if (man->is_champion->three == 1)
    res = hugues_create_int(&man->arena->arena[man->three->pc]);
  if (man->is_champion->four == 1)
    res = hugues_create_int(&man->arena->arena[man->four->pc]);
  if (res == 1)
    man->one->live_in_progress = 1;
  else if (res == 2)
    man->two->live_in_progress = 1;
  else if (res == 3)
    man->three->live_in_progress = 1;
  else if (res == 4)
    man->four->live_in_progress = 1;
  man->one->pc = man->one->pc + 5;
}
