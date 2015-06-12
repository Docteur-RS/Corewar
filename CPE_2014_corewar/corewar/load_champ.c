/*
** load_champ.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:14:49 2014 lancel_e
** Last update Sun Apr 13 23:14:49 2014 lancel_e
*/

#include "all.h"

void	load_champion(t_manage *man, int pos, char *code, int len_code)
{
  int	i;
  int	j;

  i = 0;
  while (i < len_code)
    {
      man->arena->arena[pos] = code[i];
      i = i + 1;
      pos = pos + 1;
    }
}

void	manage_load_champion(t_manage *man)
{
  int	mem_free;

  mem_free = MEM_SIZE - (man->arena->len_code_one + man->arena->len_code_two
			 + man->arena->len_code_three
			 + man->arena->len_code_four);
  mem_free = mem_free / (man->gen->argc - 1);
  load_champion(man, man->one->pc, man->one->code, man->arena->len_code_one);
  if (man->is_champion->two == 1)
    man->two->pc = man->arena->len_code_one + mem_free;
  load_champion(man, man->two->pc, man->two->code, man->arena->len_code_two);
  if (man->is_champion->three == 1)
    man->three->pc =  man->arena->len_code_one + mem_free
      + man->arena->len_code_two + mem_free;
  load_champion(man, man->three->pc, man->three->code,
		man->arena->len_code_three);
  if (man->is_champion->four == 1)
    man->four->pc = man->arena->len_code_one + mem_free
      + man->arena->len_code_two + mem_free
      + man->arena->len_code_three + mem_free;
  load_champion(man, man->four->pc, man->four->code,
		man->arena->len_code_four);
}
