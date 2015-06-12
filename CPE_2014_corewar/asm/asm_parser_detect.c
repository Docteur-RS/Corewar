/*
** asm_parser_detect.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:34:03 2014 lancel_e
** Last update Sun Apr 13 23:34:04 2014 lancel_e
*/

#include "corewar.h"

void	hugues_detect_header_programme_next0(char *text, unsigned int count,
					      unsigned int counter, header_t *header)
{
  char	*pointer;

  while ((*text != '\0') && (*text != 34))
    {
      count = count + 1;
      text = text + 1;
    }
  if (*text == '\0')
    hugues_error(0);
  text = text - count;
  if ((pointer = malloc(sizeof(char) * (count + 1))) == NULL)
    hugues_error(2);
  while (count != 0)
    {
      *pointer = *text;
      pointer = pointer + 1;
      text = text + 1;
      count = count - 1;
      counter = counter + 1;
    }
  *pointer = '\0';
  hugues_parameter_program_name(pointer - counter, header);
  free (pointer - counter);
}

void		hugues_detect_header_programname(char *text, header_t *header)
{
  unsigned int	count;
  unsigned int	counter;
  unsigned int	result;

  count = 0;
  counter = 0;
  result = string_search(text, SEARCH_NAME, 0, 0);
  if (result == UINT_MAX)
    hugues_error(0);
  else
    {
      text = text + result + string_length(SEARCH_NAME) + 1;
      if (*text != 34)
	hugues_error(0);
      text = text + 1;
      hugues_detect_header_programme_next0(text, count, counter, header);
    }
}

void	hugues_detect_header_comment_next0(char *text, unsigned int count,
					      unsigned int counter, header_t *header)
{
  char	*pointer;

  while ((*text != '\0') && (*text != 34))
    {
      count = count + 1;
      text = text + 1;
    }
  if (*text == '\0')
    hugues_error(1);
  text = text - count;
  if ((pointer = malloc(sizeof(char) * (count + 1))) == NULL)
    hugues_error(2);
  while (count != 0)
    {
      *pointer = *text;
      pointer = pointer + 1;
      text = text + 1;
      count = count - 1;
      counter = counter + 1;
    }
  *pointer = '\0';
  hugues_parameter_program_comment(pointer - counter, header);
}

void		hugues_detect_header_comment(char *text, header_t *header)
{
  unsigned int	count;
  unsigned int	counter;
  unsigned int	result;

  count = 0;
  counter = 0;
  result = string_search(text, SEARCH_COMMENT, 0, 0);
  if (result == UINT_MAX)
    hugues_error(1);
  else
    {
      text = text + result + string_length(SEARCH_COMMENT) + 1;
      if (*text != 34)
	hugues_error(1);
      text = text + 1;
      hugues_detect_header_comment_next0(text, count, counter, header);
    }
}
