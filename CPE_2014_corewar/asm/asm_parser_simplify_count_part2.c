/*
** asm_parser_simplify_count_part2.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:34:41 2014 lancel_e
** Last update Sun Apr 13 23:34:42 2014 lancel_e
*/

#include "corewar.h"

void	hugues_simplify_count_next5(unsigned int *result, unsigned int *count_x)
{
  *result = *result + 1;
  *count_x = *count_x + 1;
}

void	hugues_simplify_count_next6(char **text, unsigned int *result,
				    unsigned int *count_x, unsigned int *count_y)
{
  if ((text[*count_y][*count_x] != '\0')
      && ((text[*count_y][*count_x] != '#')
	  && (text[*count_y][*count_x] != ';')))
    *result = *result + 1;
}

void	hugues_simplify_count_next7(char **text, unsigned int *result,
                                    unsigned int *count_x,
				    unsigned int *count_y)
{
  hugues_simplify_count_next1(text, count_x, *count_y);
  while (text[*count_y][*count_x] != '\0')
    if (text[*count_y][*count_x] == 34)
      hugues_simplify_count_next2(text, result, count_x, count_y);
    else if (text[*count_y][*count_x] == 39)
      hugues_simplify_count_next3(text, result, count_x, count_y);
    else if ((text[*count_y][*count_x] == '#')
	     || (text[*count_y][*count_x] == ';'))
      hugues_simplify_count_next4(text, count_x, count_y);
    else if ((text[*count_y][*count_x] == ' ')
	     || (text[*count_y][*count_x] == '\t'))
      {
	hugues_simplify_count_next1(text, count_x, *count_y);
	hugues_simplify_count_next6(text, result, count_x, count_y);
      }
    else
      hugues_simplify_count_next5(result, count_x);
  *result = *result + 1;
}

unsigned int	hugues_simplify_count(char **text)
{
  unsigned int	result;
  unsigned int	count_y;
  unsigned int	count_x;

  result = 0;
  count_y = 0;
  while (text[count_y] != '\0')
    {
      hugues_simplify_count_next0(text, &count_x, count_y);
      if ((text[count_y][count_x] != '\0')
	  && ((text[count_y][count_x] != '#')
	      && (text[count_y][count_x] != ';')))
	hugues_simplify_count_next7(text, &result, &count_x, &count_y);
      count_y = count_y + 1;
    }
  return (result);
}
