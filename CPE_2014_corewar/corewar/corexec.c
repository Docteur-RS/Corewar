/*
** corexec.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:09:22 2014 lancel_e
** Last update Sun Apr 13 23:09:23 2014 lancel_e
*/

#include "all.h"

void	move_pc(t_manage *man, int champ, int more_pc)
{
  if (champ == 1)
    man->one->pc = man->one->pc + more_pc;
  else if (champ == 2)
    man->two->pc = man->two->pc + more_pc;
  else if (champ == 3)
    man->three->pc = man->three->pc + more_pc;
  else if (champ == 4)
    man->four->pc = man->four->pc + more_pc;
}

int	hugues_create_int(char *pointer)
{
  return ((*(pointer + 0) * 16777216) +
	  (*(pointer + 1) * 65536) +
	  (*(pointer + 2) * 256) +
	  (*(pointer + 3)));
}

int	hugues_get_bit(unsigned char character, unsigned char position)
{
  if (position >= 8)
    position = 7;
  if (position <= -8)
    position = -7;
  if (position < 0)
    position = position + 7;
  while (position != 0)
    {
      character = character / 2;
      position = position - 1;
    }
  return (character - ((character / 2) * 2));
}

int		hugues_get_parameters(char character, unsigned char parameter)
{
  int		temp;
  unsigned char	result;

  temp = character;
  temp = temp + 128;
  result = temp;
  return (((hugues_get_bit(result, (parameter * 2) + 0)) * 2)
	  + hugues_get_bit(result, (parameter * 2) + 1));
}

int	corexec(t_manage *man, char inst, int num_champ)
{
  int	time;

  time = 0;
  if ((time = adressing_nonrelativ(man, inst, num_champ)) == -1)
    if ((time = operator_1(man, inst, num_champ)) == -1)
      if ((time = operator_2(man, inst, num_champ)) == -1)
	if ((time = carri(man, inst, num_champ)) == -1)
	  if ((time = other(man, inst, num_champ)) == -1)
	    if ((time = has_live(man, inst, num_champ)) == -1)
	      return (-1);
  return (time);
}
