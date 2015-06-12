/*
** call_inst.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:09:08 2014 lancel_e
** Last update Sun Apr 13 23:09:09 2014 lancel_e
*/

#include "all.h"

int	adressing_nonrelativ(t_manage *man, char inst, int num_champ)
{
  if (inst == 13)
    {
      move_pc(man, num_champ, 12);
      return (lld_inst());
    }
  else if (inst == 14)
    {
      move_pc(man, num_champ, 12);
      return (lldi_inst());
    }
  else if (inst == 15)
    {
      move_pc(man, num_champ, 4);
      return (lfork_inst());
    }
  return (-1);
}

int	operator_1(t_manage *man, char inst, int num_champ)
{
  if (inst == 4)
    return (add_inst(man, num_champ));
  else if (inst == 5)
    {
      move_pc(man, num_champ, 16);
      return (sub_inst());
    }
  else if (inst == 6)
    {
      move_pc(man, num_champ, 16);
      return (and_inst());
    }
  return (-1);
}

int	operator_2(t_manage *man, char inst, int num_champ)
{
  if (inst == 7)
    {
      move_pc(man, num_champ, 16);
      return (or_inst());
    }
  else if (inst == 8)
    {
      xor_inst();
      move_pc(man, num_champ, 16);
      return (16);
    }
  return (-1);
}

int	carri(t_manage *man, char inst, int num_champ)
{
  if (inst == 2)
    {
      move_pc(man, num_champ, 12);
      return (ld_inst());
    }
  else if (inst == 9)
    {
      move_pc(man, num_champ, 4);
      return (zjump_inst());
    }
  else if (inst == 10)
    {
      move_pc(man, num_champ, 16);
      return (ldi_inst());
    }
  return (-1);
}

int	other(t_manage *man, char inst, int num_champ)
{
  if (inst == 3)
    {
      st_inst();
      move_pc(man, num_champ, 12);
      return (12);
    }
  else if (inst == 11)
    {
      sti_inst();
      move_pc(man, num_champ, 16);
      return (16);
    }
  else if (inst == 12)
    {
      fork_inst();
      move_pc(man, num_champ, 4);
      return (4);
    }
  else if (inst == 16)
    {
      aff_inst();
      move_pc(man, num_champ, 8);
      return (4);
    }
  return (-1);
}
