/*
** asm_string_advanced.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:10 2014 lancel_e
** Last update Sun Apr 13 23:35:11 2014 lancel_e
*/

#include "corewar.h"

int	string_words_count(char *text)
{
  int	result;

  result = 0;
  while ((*text != '\0') && (*text == ' '))
    text = text + 1;
  while (*text != '\0')
    {
      while ((*text != '\0') && (*text != ' '))
	text = text + 1;
      result = result + 1;
      while ((*text != '\0') && (*text == ' '))
	text = text + 1;
    }
  return (result);
}

char	*string_concatenate(char *left, char *right)
{
  unsigned int	length_left;
  unsigned int	length_right;
  char		*pointer;

  length_left = string_length(left);
  length_right = string_length(right);
  if ((pointer = malloc(sizeof(char)
			* (length_left + length_right + 1))) == NULL)
    hugues_error(2);
  while (*left != '\0')
    {
      *pointer = *left;
      pointer = pointer + 1;
      left = left + 1;
    }
  while (*right != '\0')
    {
      *pointer = *right;
      pointer = pointer + 1;
      right = right + 1;
    }
  *pointer = '\0';
  pointer = pointer - length_right - length_left;
  return (pointer);
}

char	*string_concatenate_length(char *left, int length_left,
				   char *right, int length_right)
{
  int	l_left;
  int	l_right;
  char	*pointer;

  l_left = length_left;
  l_right = length_right;
  if ((pointer = malloc(sizeof(char)
			* (length_left + length_right + 1))) == NULL)
    hugues_error(2);
  while (length_left != 0)
    {
      *pointer = *left;
      pointer = pointer + 1;
      left = left + 1;
      length_left = length_left - 1;
    }
  while (length_right != 0)
    {
      *pointer = *right;
      pointer = pointer + 1;
      right = right + 1;
      length_right = length_right - 1;
    }
  *pointer = '\0';
  return (pointer - l_right - l_left);
}
