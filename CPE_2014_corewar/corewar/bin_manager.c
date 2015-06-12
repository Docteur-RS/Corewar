/*
** bin_manager.c for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:08:54 2014 lancel_e
** Last update Sun Apr 13 23:08:55 2014 lancel_e
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "all.h"

int	bin_manager_first_part(t_manage *man, char **argv)
{
  int	ret;

  if ((man->fd->fd_one = open(man->f_name->one, O_RDONLY)) != -1)
    {
      if ((man->f_name->size_one = lseek(man->fd->fd_one, 0, SEEK_END)) == -1)
	return (-1);
      if (lseek(man->fd->fd_one, 0, SEEK_SET) == -1)
	return (-1);
      man->file->one = my_xmalloc(man->f_name->size_one);
      my_memset(man->file->one, man->f_name->size_one);
      if ((ret = read(man->fd->fd_one, man->file->one,
		      (man->f_name->size_one - 1))) == -1)
	return (-1);
      if (close(man->fd->fd_one) == -1)
	return (-1);
    }
  else
    {
      err_msg(1, argv[1]);
      return (-1);
    }
  return (0);
}

int	bin_manager_second_part(t_manage *man, char **argv)
{
  int	ret;

  if ((man->fd->fd_two = open(man->f_name->two, O_RDONLY)) != -1)
    {
      if ((man->f_name->size_two = lseek(man->fd->fd_two, 0, SEEK_END)) == -1)
	return (-1);
      if (lseek(man->fd->fd_two, 0, SEEK_SET) == -1)
	return (-1);
      man->file->two = my_xmalloc(man->f_name->size_two);
      my_memset(man->file->two, man->f_name->size_two);
      if ((ret = read(man->fd->fd_two, man->file->two,
		      (man->f_name->size_one - 1))) == -1)
	return (-1);
      if (close(man->fd->fd_two) == -1)
	return (-1);
    }
  else
    {
      err_msg(1, argv[2]);
      return (-1);
    }
  return (0);
}

int	bin_manager_continue_first_part(t_manage *man, char **argv, int ret)
{
  if ((man->fd->fd_three = open(man->f_name->three, O_RDONLY)) != -1)
    {
      if ((man->f_name->size_three = lseek(man->fd->fd_three, 0, SEEK_END))
	  == -1)
	return (-1);
      if (lseek(man->fd->fd_three, 0, SEEK_SET) == -1)
	return (-1);
      man->file->three = my_xmalloc(man->f_name->size_three);
      my_memset(man->file->three, man->f_name->size_three);
      if ((ret = read(man->fd->fd_three, man->file->three,
		      (man->f_name->size_three - 1))) == -1)
	return (-1);
      if (close(man->fd->fd_three) == -1)
	return (-1);
    }
  else
    {
      err_msg(1, argv[3]);
      return (-1);
    }
  return (0);
}

int	bin_manager_continue_second_part(t_manage *man, char **argv, int ret)
{
  if ((man->fd->fd_four = open(man->f_name->four, O_RDONLY)) != -1)
    {
      if ((man->f_name->size_four = lseek(man->fd->fd_four, 0, SEEK_END))
	  == -1)
	return (-1);
      if (lseek(man->fd->fd_four, 0, SEEK_SET) == -1)
	return (-1);
      man->file->four = my_xmalloc(man->f_name->size_four);
      my_memset(man->file->four, man->f_name->size_four);
      if ((ret = read(man->fd->fd_four, man->file->four,
		      (man->f_name->size_four - 1))) == -1)
	return (-1);
      if (close(man->fd->fd_four) == -1)
	return (-1);
    }
  else
    {
      err_msg(1, argv[4]);
      return (-1);
    }
  return (0);
}
