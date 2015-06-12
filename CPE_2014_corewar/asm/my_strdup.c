/*
** my_strdup.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 21:17:01 2014 lancel_e
** Last update Sun Apr 13 21:17:01 2014 lancel_e
*/

#include "corewar.h"

char	*my_strdup(char *str)
{
  int	i;
  char	*dup_str;

  i = 0;
  dup_str = malloc(sizeof(*str) * my_strlen(str));
  if (dup_str == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      dup_str[i] = str[i];
      i = i + 1;
    }
  return (dup_str);
}
