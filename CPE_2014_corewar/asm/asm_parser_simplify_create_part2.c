/*
** asm_parser_simplify_create_part2.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:01 2014 lancel_e
** Last update Sun Apr 13 23:35:02 2014 lancel_e
*/

#include "corewar.h"

char	*hugues_simplify_create_next5(char **text, char *pointer,
				      unsigned int *count_x, unsigned int *count_y)
{
  *pointer = text[*count_y][*count_x];
  pointer = pointer + 1;
  *count_x = *count_x + 1;
  return (pointer);
}

char	*hugues_simplify_create_next6(char **text, char *pointer,
				      unsigned int *count_x, unsigned int *count_y)
{
  if ((text[*count_y][*count_x] != '\0')
      && ((text[*count_y][*count_x] != '#')
	  && (text[*count_y][*count_x] != ';')))
    {
      *pointer = ' ';
      pointer = pointer + 1;
    }
  return (pointer);
}

char	*hugues_simplify_create_next7(char **text, char *pointer,
				     unsigned int *count_x, unsigned int *count_y)
{
  hugues_simplify_create_next1(text, count_x, *count_y);
  while (text[*count_y][*count_x] != '\0')
    if (text[*count_y][*count_x] == 34)
      pointer = hugues_simplify_create_next2(text, pointer, count_x, count_y);
    else if (text[*count_y][*count_x] == 39)
      pointer = hugues_simplify_create_next3(text, pointer, count_x, count_y);
    else if ((text[*count_y][*count_x] == '#')
	     || (text[*count_y][*count_x] == ';'))
      hugues_simplify_create_next4(text, count_x, count_y);
    else if ((text[*count_y][*count_x] == ' ')
	     || (text[*count_y][*count_x] == '\t'))
      {
	hugues_simplify_create_next1(text, count_x, *count_y);
	pointer = hugues_simplify_create_next6(text, pointer, count_x, count_y);
      }
    else
      pointer = hugues_simplify_create_next5(text, pointer, count_x, count_y);
  *pointer = '\n';
  pointer = pointer + 1;
  return (pointer);
 }

void		hugues_simplify_create(char **text, char *pointer)
{
  unsigned int	count_y;
  unsigned int	count_x;

  count_y = 0;
  while (text[count_y] != '\0')
    {
      hugues_simplify_create_next0(text, &count_x, count_y);
      if ((text[count_y][count_x] != '\0')
	  && ((text[count_y][count_x] != '#')
	      && (text[count_y][count_x] != ';')))
	pointer = hugues_simplify_create_next7(text,
					       pointer,
					       &count_x,
					       &count_y);
      count_y = count_y + 1;
    }
}
