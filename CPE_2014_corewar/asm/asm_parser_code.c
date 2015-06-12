/*
** asm_parser_code.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:33:37 2014 lancel_e
** Last update Sun Apr 13 23:33:38 2014 lancel_e
*/

#include "corewar.h"

void		hugues_parameter_program_name(char *program_name, header_t *header)
{
  unsigned int	temp;
  char		boolean;

  temp = 0;
  boolean = 0;
  while (temp <= PROG_NAME_LENGTH + 1)
    {
      if (boolean == 1)
	header->prog_name[temp] = '\0';
      else
	if (*program_name == '\0')
	  boolean = 1;
	else
	  header->prog_name[temp] = *program_name;
      program_name = program_name + 1;
      temp = temp + 1;
    }
}

void		hugues_parameter_program_comment(char *program_comment,
						 header_t *header)
{
  unsigned int	temp;
  char		boolean;

  temp = 0;
  boolean = 0;
  while (temp <= COMMENT_LENGTH + 1)
    {
      if (boolean == 1)
	header->comment[temp] = '\0';
      else
	if (*program_comment == '\0')
	  boolean = 1;
	else
	  header->comment[temp] = *program_comment;
      program_comment = program_comment + 1;
      temp = temp + 1;
    }
}

int	hugues_code_next(char *pointer, char *text, int number)
{
  *(pointer + 0) = (*text % 16);
  *(pointer + 1) = 0;
  *(pointer + 2) = (*text %5);
  *(pointer + 3) = (*text %42);
  *(pointer + 4) = (*text %12);
  *(pointer + 5) = (*text %23);
  return (number);
}

char	*hugues_code(char *text, int size)
{
  int	length;
  int	temp;
  char	*pointer;

  temp = 0;
  length = size - (size % 6);
  if ((pointer = malloc(sizeof(char) * (length + 1))) == NULL)
    hugues_error(2);
  while (length != 0)
    {
      if (*text != '\0')
	text = text + hugues_code_next(pointer + temp, text, 1);
      else
	text = text + hugues_code_next(pointer + temp, text, 0);
      temp = temp + 6;
      length = length - 6;
    }
  pointer[temp - 1] = 0;
  return (pointer);
}
