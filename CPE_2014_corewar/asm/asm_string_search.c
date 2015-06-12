/*
** asm_string_search.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:29 2014 lancel_e
** Last update Sun Apr 13 23:35:30 2014 lancel_e
*/

#include "corewar.h"

unsigned int	string_search_next0(unsigned int length, char *text)
{
  if (length == 0)
    length = string_length(text);
  return (length);
}

char		*string_search_next1(char *text, unsigned int start)
{
  while (start != 0)
    {
      text = text + 1;
      start = start - 1;
    }
  return (text);
}

char		*string_search_next2(char *text, unsigned int *result,
				     unsigned int *length, int number)
{
  text = text + number;
  *result = *result + number;
  *length = *length - number;
  return (text);
}

char		*string_search_next3(char *text, unsigned int length, int number)
{
  text = text - number;
  length = length + number;
  return (text);
}

unsigned int    string_search(char *text, char *search,
			      unsigned int start, unsigned int length)
{
  unsigned int  result;
  unsigned int  count;

  result = 0;
  length = string_search_next0(length, text);
  text = string_search_next1(text, start);
  while ((*text != '\0') && (length != 0))
    {
      count = 0;
      while (((*text != '\0') && (*search != '\0'))
	     && ((length != 0) && (*text == *search)))
        {
	  search = search + 1;
	  text = string_search_next2(text, &count, &length, 1);
        }
      if (*search == '\0')
        return (result);
      else
        {
          search = search - count;
	  text = string_search_next3(text, length, count);
        }
      text = string_search_next2(text, &result, &length, 1);
    }
  return (UINT_MAX);
}
