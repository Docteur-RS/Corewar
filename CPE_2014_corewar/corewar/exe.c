/*
** exe.c for  corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:09:54 2014 lancel_e
** Last update Sun Apr 13 23:09:54 2014 lancel_e
*/

#include "all.h"

void	aff_alive(t_manage *man, int nb)
{
  my_putstr("Champion ");
  my_put_nbr(nb);
  my_putstr(" (");
  if (man->one->alive == 1 && man->is_champion->one == 1)
    my_putstr(man->one->name);
  else if (man->two->alive == 1 && man->is_champion->two == 1)
    my_putstr(man->two->name);
  else if (man->three->alive == 1 && man->is_champion->three == 1)
    my_putstr(man->three->name);
  else if (man->four->alive == 1 && man->is_champion->four == 1)
    my_putstr(man->four->name);
  my_putstr(") has won !\n");
}

void		exe1(t_manage *man)
{
  static int	ok = 0;
  static int	time_cmd = 0;

  if (ok == 0)
    {
      time_cmd = corexec(man, man->arena->arena[man->one->pc], 1);
      ok = ok + 1;
      return ;
    }
  if (ok == time_cmd)
    {
      if (man->one->live_in_progress == 1)
	{
	  man->one->live_in_progress = 0;
	  man->one->has_live = 1;
	  man->gen->total_live = man->gen->total_live + 1;
	  aff_alive(man, 1);
	}
      man->one->pc = man->one->pc + time_cmd;
      ok = 0;
      return ;
    }
  ok = ok + 1;
}

void		exe2(t_manage *man)
{
  static int	ok = 0;
  static int	time_cmd = 0;

  if (ok == 0)
    {
      time_cmd = corexec(man, man->arena->arena[man->two->pc], 2);
      ok = ok + 1;
      return ;
    }
  if (ok == time_cmd)
    {
      if (man->two->live_in_progress == 1)
	{
	  man->two->live_in_progress = 0;
	  man->two->has_live = 1;
	  man->gen->total_live = man->gen->total_live + 1;
	  aff_alive(man, 2);
	}
      man->two->pc = man->two->pc + time_cmd;
      ok = 0;
    }
  ok = ok + 1;
}

void		exe3(t_manage *man)
{
  static int	ok = 0;
  static int	time_cmd = 0;

  if (ok == 0)
    {
      time_cmd = corexec(man, man->arena->arena[man->three->pc], 3);
      ok = ok + 1;
      return ;
    }
  if (ok == time_cmd)
    {
      if (man->three->live_in_progress == 1)
	{
	  man->three->live_in_progress = 0;
	  man->three->has_live = 1;
	  man->gen->total_live = man->gen->total_live + 1;
	  aff_alive(man, 3);
	}
      man->three->pc = man->three->pc + time_cmd;
      ok = 0;
    }
  ok = ok + 1;
}

void		exe4(t_manage *man)
{
  static int	ok = 0;
  static int	time_cmd = 0;

  if (ok == 0)
    {
      time_cmd = corexec(man, man->arena->arena[man->four->pc], 4);
      ok = ok + 1;
      return ;
    }
  if (ok == time_cmd)
    {
      if (man->four->live_in_progress == 1)
	{
	  man->four->live_in_progress = 0;
	  man->four->has_live = 1;
	  man->gen->total_live = man->gen->total_live + 1;
	  aff_alive(man, 4);
	}
      man->four->pc = man->four->pc + time_cmd;
      ok = 0;
    }
  ok = ok + 1;
}
