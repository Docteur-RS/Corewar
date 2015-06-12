/*
** my_strcat.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:35:59 2014 lancel_e
** Last update Sun Apr 13 23:36:00 2014 lancel_e
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (str1[i] != '\0')
    i = i + 1;
  while (str2[k] != '\0')
    {
      str1[i] = str2[k];
      k = k + 1;
      i = i + 1;
    }
  return (str1);
}
