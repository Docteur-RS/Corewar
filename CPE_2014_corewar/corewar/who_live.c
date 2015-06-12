/*
** who_live.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:15:49 2014 lancel_e
** Last update Sun Apr 13 23:15:50 2014 lancel_e
*/

#include "all.h"

void	say_alive(t_manage *man)
{
  if (man->one->alive == 1 && man->is_champion->one == 1)
    {
      my_putstr("Champion 1 (");
      my_putstr(man->one->name);
      my_putstr(") has won !\n");
    }
  if (man->two->alive == 1 && man->is_champion->two == 1)
    {
      my_putstr("Champion 2 (");
      my_putstr(man->two->name);
      my_putstr(") has won !\n");
    }
  if (man->three->alive == 1 && man->is_champion->three == 1)
    {
      my_putstr("Champion 3 (");
      my_putstr(man->three->name);
      my_putstr(") has won !\n");
    }
  if (man->four->alive == 1 && man->is_champion->four == 1)
    {
      my_putstr("Champion 4 (");
      my_putstr(man->one->name);
      my_putstr(") has won !\n");
    }
}

int	who_lives(t_manage *man)
{
  if (man->is_champion->one == 1 && man->one->alive == 1)
    {
      if (man->one->has_live == 0)
	{
	  man->one->alive = 0;
	  my_putstr("Champion 1 (");
	  my_putstr(man->one->name);
	  my_putstr(") is dead !\n");
	  if (who_won(man) <= 1)
	    {
	      say_alive(man);
	      return (-1);
	    }
	}
      else
	{
	  my_putstr(man->one->name);
	  my_putstr(" is alive\n");
	}
    }
  if (who_live_for_2(man) == -1)
    return (-1);
  return (-0);
}

int	who_live_for_2(t_manage *man)
{
  if (man->is_champion->two == 1 && man->two->alive == 1)
    {
      if (man->two->has_live == 0)
	{
	  man->two->alive = 0;
	  my_putstr("Champion 2 (");
	  my_putstr(man->two->name);
	  my_putstr(") is dead !\n");
	  if (who_won(man) <= 1)
	    {
	      say_alive(man);
	      return (-1);
	    }
	}
      else
	{
	  my_putstr("Champion 2 (");
	  my_putstr(man->two->name);
	  my_putstr(") s alive\n");
	}
    }
  if (who_live_for_3(man) == -1)
    return (-1);
  return (-0);
}

int	who_live_for_3(t_manage *man)
{
  if (man->is_champion->three == 1 && man->three->alive == 1)
    {
      if (man->three->has_live == 0)
	{
	  man->three->alive = 0;
	  my_putstr("Champion 3 (");
	  my_putstr(man->three->name);
	  my_putstr(") is dead !\n");
	  if (who_won(man) <= 1)
	    {
	      say_alive(man);
	      return (-1);
	    }
	}
      else
	{
	  my_putstr("Champion 3 (");
	  my_putstr(man->three->name);
	  my_putstr(") is alive\n");
	}
    }
  if (who_live_for_4(man) == -1)
    return (-1);
  return (-0);
}

int	who_live_for_4 (t_manage *man)
{
  if (man->is_champion->four == 1 && man->four->alive == 1)
    {
      if (man->four->has_live == 0)
	{
	  man->four->alive = 0;
	  my_putstr("Champion 4 (");
	  my_putstr(man->four->name);
	  my_putstr(") is dead !\n");
	  if (who_won(man) <= 1)
	    {
	      say_alive(man);
	      return (-1);
	    }
	}
      else
	{
	  my_putstr("Champion 4 (");
	  my_putstr(man->four->name);
	  my_putstr(") is alive\n");
	}
    }
  if (who_won(man) == -1)
    return (-1);
  return (0);
}
