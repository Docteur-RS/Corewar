/*
** asm_parser_simplify.c for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:34:18 2014 lancel_e
** Last update Sun Apr 13 23:34:19 2014 lancel_e
*/

#include "corewar.h"

void            hugues_header_initialize(header_t *header)
{
  unsigned int  count;

  header->magic = 0;
  count = PROG_NAME_LENGTH + 1;
  while (count != 0)
    {
      header->prog_name[count + 1] = '\0';
      count = count - 1;
    }
  header->prog_size = 0;
  count = COMMENT_LENGTH + 1;
  while (count != 0)
    {
      header->comment[count + 1] = '\0';
      count = count - 1;
    }
}

void	hugues_simplify_file_next0(char *pointer, header_t *header)
{
  int	fd;

  hugues_header_initialize(header);
  header->magic = (int)(COREWAR_EXEC_MAGIC);
  hugues_detect_header_programname(pointer, header);
  hugues_detect_header_comment(pointer, header);
  header->prog_size = string_words_count(pointer);
  fd = open(string_concatenate(header->prog_name, ".cor"),
	    O_CREAT | O_WRONLY, 0755);
  write(fd,
	string_concatenate_length(
				  ((char *)(header)),
				  sizeof(header_t),
				  hugues_code(pointer, header->prog_size),
				  header->prog_size
				  ),
	header->prog_size + sizeof(*header));
  free(pointer);
  free(header);
  close(fd);
}

void		hugues_simplify_file(char **text)
{
  unsigned int	count;
  unsigned int	counter;
  char		*pointer;
  header_t	*header;

  text = text + 1;
  count = hugues_simplify_count(text);
  counter = 0;
  if ((pointer = malloc(sizeof(char) * (count + 1))) == NULL)
    hugues_error(2);
  while (count != 0)
    {
      *pointer = '\0';
      pointer = pointer + 1;
      count = count - 1;
      counter = counter + 1;
    }
  *pointer = '\0';
  pointer = pointer - counter;
  hugues_simplify_create(text, pointer);
  if ((header = malloc(sizeof(header_t) * 1)) == NULL)
    hugues_error(2);
  hugues_simplify_file_next0(pointer, header);
}
