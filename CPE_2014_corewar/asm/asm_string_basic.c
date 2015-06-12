/*
** asm_string_basic.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:20 2014 lancel_e
** Last update Sun Apr 13 23:35:20 2014 lancel_e
*/

#include "corewar.h"

void	hugues_error(int error)
{
  if (error == 0)
    string_print("Error : Program name not found !", 0, 0, 1);
  if (error == 1)
    string_print("Error : Comment not found !", 0, 0, 1);
  if (error == 2)
    string_print("Error : Malloc fail", 0, 0, 1);
  exit(EXIT_FAILURE);
}

void	char_print(char character)
{
  write (1, &character, 1);
}

unsigned int	string_length(char *text)
{
  unsigned int	result;

  result = 0;
  while (*text != '\0')
    {
      text = text + 1;
      result = result + 1;
    }
  return (result);
}

void	string_print(char *text, unsigned int start,
		     unsigned int length, unsigned int back_lines)
{
  if (length == 0)
    length = string_length(text);
  while ((*text != '\0') && (start != 0))
    {
      text = text + 1;
      start = start - 1;
    }
  while ((*text != '\0') && (length != 0))
    {
      char_print(*text);
      text = text + 1;
      length = length - 1;
    }
  while (back_lines != 0)
    {
      char_print('\n');
      back_lines = back_lines - 1;
    }
}
