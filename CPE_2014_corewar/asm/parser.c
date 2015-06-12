/*
** parser.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:36:17 2014 lancel_e
** Last update Sun Apr 13 23:36:18 2014 lancel_e
*/

#include "corewar.h"

int	open_file(char *filename)
{
  int	fd;

  if ((fd = open(filename, O_RDONLY)) == -1)
    {
      print_no_such_file(filename);
      return (-1);
    }
  return (fd);
}

int	file_to_wordtab(char *filename)
{
  int	fd;
  char	**tab;
  char	*str;

  if ((tab = malloc(2 * sizeof(char *))) == NULL)
    return (-1);
  tab[0] = malloc(2 * sizeof(char));
  tab[0][0] = '\0';
  tab[1] = NULL;
  if ((fd = open_file(filename)) == -1)
    return (-1);
  while ((str = get_next_line(fd)) != NULL)
    tab = realloc_tab(tab, str);
  hugues_func(tab);
  return (0);
}

int	main(int ac, char **av)
{
  (void)ac;
  if (av[1] == NULL)
    {
      my_putstr(USAGE_MSG);
      return (0);
    }
  file_to_wordtab(av[1]);
  return (0);
}
