/*
** main.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:14:57 2014 lancel_e
** Last update Sun Apr 13 23:14:58 2014 lancel_e
*/

#include "all.h"

int	structures_manage(t_manage *man, char **argv, int argc)
{
  ini_structure(man, argv, argc);
  if (get_file_name(man, argc, argv) == -1)
    return (-1);
  if (bin_manager(man, argv) == -1)
    return (-1);
  return (0);
}

void	ini_pc(t_manage *man, int argc)
{
  man->one->pc = 0;
  man->two->pc = 0;
  man->three->pc = 0;
  man->four->pc = 0;
}

void	ini_structure_2(t_manage *man, char **argv, int argc)
{
  my_memset(man->arena->arena, LEN_VM);
  ini_pc(man, argc);
  man->one->reg[0] = 1;
  man->two->reg[0] = 2;
  man->three->reg[0] = 3;
  man->four->reg[0] = 4;
  man->one->alive = 1;
  man->one->live_in_progress = 0;
  man->one->has_live = 0;
  man->two->alive = 1;
  man->two->live_in_progress = 0;
  man->two->has_live = 0;
  man->three->alive = 1;
  man->three->live_in_progress = 0;
  man->three->has_live = 0;
  man->four->alive = 1;
  man->four->live_in_progress = 0;
  man->four->has_live = 0;
  man->gen->total_live = 0;
}

void	ini_structure(t_manage *man, char **argv, int argc)
{
  man->gen->die = 0;
  man->gen->delta = 0;
  man->arena->len_code_one = 0;
  man->arena->len_code_two = 0;
  man->arena->len_code_three = 0;
  man->arena->len_code_four = 0;
  man->gen->argc = argc;
  man->is_champion->one = 0;
  man->is_champion->two = 0;
  man->is_champion->three = 0;
  man->is_champion->four = 0;
  man->gen->die = CYCLE_TO_DIE;
  man->gen->delta = CYCLE_DELTA;
  man->gen->delta = NBR_LIVE;
  man->arena->arena = my_xmalloc_arena(LEN_VM);
  ini_structure_2(man, argv, argc);
}

int			main(int argc, char **argv)
{
  t_manage		man;
  t_file		file;
  t_champion_exist	is_champion;
  t_champ		one;
  t_champ		two;
  t_champ		three;
  t_champ		four;
  t_fd			fd;
  t_file_name		f_name;
  t_arena		arena;
  t_global_info		gen;

  man.file = &file;
  man.is_champion = &is_champion;
  man.one = &one;
  man.two = &two;
  man.three = &three;
  man.four = &four;
  man.fd = &fd;
  man.f_name = &f_name;
  man.arena = &arena;
  man.gen = &gen;
  if (structures_manage(&man, argv, argc) == -1)
    return (-1);
  return (0);
}
