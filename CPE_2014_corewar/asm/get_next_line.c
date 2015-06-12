/*
** get_next_line.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:43 2014 lancel_e
** Last update Sun Apr 13 23:35:44 2014 lancel_e
*/

#include "corewar.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

char	*get_next_line(const int fd)
{
  t_var	to;

  if (fd == -1)
    return (NULL);
  to.resul = 0;
  to.i = 0;
  if ((to.the_line = malloc(2 * sizeof(char*))) == NULL)
    return (NULL);
  to.the_line[1] = '\0';
  if ((to.resul = read(fd, &to.my_buff, LEN)) <= 0)
    return (NULL);
  if (to.resul == 1)
    {
      while (((to.resul == 1 && to.my_buff != '\n')) && (to.my_buff != 0))
        {
	  to.the_line[to.i] = to.my_buff;
	  to.i = to.i + 1;
	  to.the_line = my_append_for_malloc_doc(to.the_line, to.my_buff);
	  to.resul = read(fd, &to.my_buff, LEN);
        }
    }
  to.the_line[to.i] = '\0';
  return (to.the_line);
}

char	*my_append_for_malloc_doc(char *tab, char c)
{
  int	i;
  char	*temp;

  i = 0;
  temp = malloc((my_strlen(tab) + 2) * sizeof(char));
  while (tab[i])
    {
      temp[i] = tab[i];
      i = i + 1;
    }
  temp[i] = c;
  i = i + 1;
  temp[i] = '\0';
  free(tab);
  tab = temp;
  return (temp);
}
