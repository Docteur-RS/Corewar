/*
** err_manage.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:09:41 2014 lancel_e
** Last update Sun Apr 13 23:09:42 2014 lancel_e
*/

#include "all.h"

void	err_msg(int i, char *str)
{
  if (i == 1)
    {
      my_putstr("[Error]: File not found: ");
      my_putstr(str);
      my_putchar('\n');
    }
  if (i == 2)
    {
      my_putstr("[Error]: File_name is not a corewar executable\n");
      my_putstr("[Error]: Unknown file extension\n");
    }
}
