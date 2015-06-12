/*
** asm_parser_simplify_create_part1.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:34:51 2014 lancel_e
** Last update Sun Apr 13 23:34:52 2014 lancel_e
*/

#include "corewar.h"

void	hugues_simplify_create_next0(char **text, unsigned int *count_x,
				     unsigned int count_y)
{
  *count_x = 0;
  while ((text[count_y][*count_x] == ' ')
	 || (text[count_y][*count_x] == '\t'))
    *count_x = *count_x + 1;
}

void	hugues_simplify_create_next1(char **text, unsigned int *count_x,
				     unsigned int count_y)
{
  while ((text[count_y][*count_x] == ' ')
	 || (text[count_y][*count_x] == '\t'))
    *count_x = *count_x + 1;
}

char	*hugues_simplify_create_next2(char **text, char *pointer,
				      unsigned int *count_x, unsigned int *count_y)
{
  *pointer = text[*count_y][*count_x];
  pointer = pointer + 1;
  *count_x = *count_x + 1;
  while ((text[*count_y][*count_x] != '\0')
	 && (text[*count_y][*count_x] != 34))
    pointer = hugues_simplify_create_next5(text, pointer, count_x, count_y);
  pointer = hugues_simplify_create_next5(text, pointer, count_x, count_y);
  return (pointer);
}

char	*hugues_simplify_create_next3(char **text, char *pointer,
				      unsigned int *count_x, unsigned int *count_y)
{
  *pointer = text[*count_y][*count_x];
  pointer = pointer + 1;
  *count_x = *count_x + 1;
  while ((text[*count_y][*count_x] != '\0')
	 && (text[*count_y][*count_x] != 39))
    pointer = hugues_simplify_create_next5(text, pointer, count_x, count_y);
  pointer = hugues_simplify_create_next5(text, pointer, count_x, count_y);
  return (pointer);
}

void    hugues_simplify_create_next4(char **text,
                                     unsigned int *count_x,
				     unsigned int *count_y)
{
  while (text[*count_y][*count_x] != '\0')
    *count_x = *count_x + 1;
}
