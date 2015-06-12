/*
** pars.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:15:20 2014 lancel_e
** Last update Sun Apr 13 23:15:21 2014 lancel_e
*/

#include "all.h"

int	is_survivor(t_manage *man)
{
  if (man->one->alive == 1)
    return (1);
  if (man->two->alive == 1)
    return (1);
  if (man->three->alive == 1)
    return (1);
  if (man->four->alive == 1)
    return (1);
  return (0);
}

int	master_pars(t_manage *man)
{
  while (42)
    {
      if (man->one->alive == 1 && man->is_champion->one == 1)
	exe1(man);
      if (man->two->alive == 1 && man->is_champion->two == 1)
	exe2(man);
      if (man->three->alive == 1 && man->is_champion->three == 1)
	exe3(man);
      if (man->four->alive == 1 && man->is_champion->four == 1)
	exe4(man);
      if (up_date(man) == -1)
	return (-1);
      if (is_survivor(man) == 0)
	return (0);
    }
  return (0);
}

int	who_won(t_manage *man)
{
  int	ok;

  ok = 0;
  if (man->one->alive == 1 && man->is_champion->one == 1)
    ok = ok + 1;
  if (man->two->alive == 1 && man->is_champion->two  == 1)
    ok = ok + 1;
  if (man->three->alive == 1 && man->is_champion->three == 1)
    ok = ok + 1;
  if (man->four->alive == 1 && man->is_champion->four == 1)
    ok = ok + 1;
  return (ok);
}

int		up_date(t_manage *man)
{
  static	int cycle = 0;

  if (man->gen->total_live >= NBR_LIVE)
    {
      man->gen->die = man->gen->die - man->gen->delta;
      man->gen->total_live = 0;
    }
  if (cycle >= man->gen->die)
    {
      if (who_lives(man) == -1)
	return (-1);
      cycle = 0;
      return (0);
    }
  cycle = cycle + 1;
  return (0);
}
