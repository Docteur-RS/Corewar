/*
** special_add.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:15:35 2014 lancel_e
** Last update Sun Apr 13 23:15:35 2014 lancel_e
*/

#include "all.h"

void	for_final_one(t_manage *man, int nb, int *final1, int type1)
{
  if (nb == 1)
    {
      if (type1 == 1)
	*final1 = man->one->reg[hugues_create_int(man->arena->arena
						  + man->one->pc)];
      if (type1 == 2)
	*final1 = hugues_create_int(man->arena->arena + man->one->pc);
    }
  if (nb == 2)
    {
      if (type1 == 1)
	*final1 = man->two->reg[hugues_create_int(man->arena->arena
						  + man->two->pc)];
      if (type1 == 2)
	*final1 = hugues_create_int(man->arena->arena + man->two->pc);
    }
  for_final_one_continue(man, nb, final1, type1);
}

void	for_final_one_continue(t_manage *man, int nb, int *final1, int type1)
{
  if (nb == 3)
    {
      if (type1 == 1)
	*final1 = man->three->reg[hugues_create_int(man->arena->arena
						    + man->three->pc)];
      if (type1 == 2)
	*final1 = hugues_create_int(man->arena->arena + man->three->pc);
    }
  if (nb == 4)
    {
      if (type1 == 1)
	*final1 = man->four->reg[hugues_create_int(man->arena->arena
						   + man->four->pc)];
      if (type1 == 2)
	*final1 = hugues_create_int(man->arena->arena + man->four->pc);
    }
}

void	for_final_two(t_manage *man, int nb, int *final2, int type2)
{
  if (nb == 1)
    {
      if (type2 == 1)
	*final2 = man->one->reg[hugues_create_int(man->arena->arena
						  + man->one->pc)];
      if (type2 == 2)
	*final2 = hugues_create_int(man->arena->arena + man->one->pc);
    }
  if (nb == 2)
    {
      if (type2 == 1)
	*final2 = man->two->reg[hugues_create_int(man->arena->arena
						  + man->two->pc)];
      if (type2 == 2)
	*final2 = hugues_create_int(man->arena->arena + man->two->pc);
    }
  for_final_two_continue(man, nb, final2, type2);
}

void	for_final_two_continue(t_manage *man, int nb, int *final2, int type2)
{
  if (nb == 3)
    {
      if (type2 == 1)
	*final2 = man->three->reg[hugues_create_int(man->arena->arena
						    + man->three->pc)];
      if (type2 == 2)
	*final2 = hugues_create_int(man->arena->arena + man->three->pc);
    }
  if (nb == 4)
    {
      if (type2 == 1)
	*final2 = man->four->reg[hugues_create_int(man->arena->arena
						   + man->four->pc)];
      if (type2 == 2)
	*final2 = hugues_create_int(man->arena->arena + man->four->pc);
    }
}

void	add_end(t_manage *man, int nb, int final2, int final3)
{
  if (nb == 1)
    {
      man->one->reg[hugues_create_int(man->arena->arena + man->one->pc)
		    ] = final2 + final3;
    }
  if (nb == 2)
    {
      man->two->reg[hugues_create_int(man->arena->arena + man->two->pc)
		    ] = final2 + final3;
    }
  if (nb == 3)
    {
      man->three->reg[hugues_create_int(man->arena->arena + man->three->pc)
		      ] = final2 + final3;
    }
  if (nb == 4)
    {
      man->four->reg[hugues_create_int(man->arena->arena + man->four->pc)
		     ] = final2 + final3;
    }
}
