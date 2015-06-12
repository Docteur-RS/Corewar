/*
** corewar_chris.h for corewar_chris in /home/jamme-_c/rendu/corewar
** 
** Made by jamme-_c
** Login   <jamme-_c@epitech.net>
** 
** Started on  Thu Mar 27 18:06:37 2014 jamme-_c
** Last update Sun Apr 13 23:07:59 2014 hugues du pouget de nadaillac
*/

#ifndef COREWAR_H_
# define COREWAR_H_

# define LEN 1
# define USAGE_MSG "Usage : ./corewar [PATH]\n"
# define SIZE_OF_LINE 50
# define UINT_MAX 4294967295
# define SEARCH_NAME ".name"
# define SEARCH_COMMENT ".comment"

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "op.h"

typedef struct	s_var
{
  int		i;
  char		*the_line;
  char		my_buff;
  int		resul;
}		t_var;

char		*get_next_line(const int);
char		*my_append_for_malloc_doc(char *, char);
int		my_strlen(char *);
void		d_tab_recpy_doc(char **, char **, int *, int *);
char		*my_strcat(char *, char *);
char		*get_next_line(const int);
char		*my_append_doc(char *, char);
void		print_no_such_file(char *);
void		my_putstr(char *);
char		**realloc_tab(char **, char *);
char		*my_strdup(char *);
void		hugues_func(char **);
void		my_putstr(char *);
int		my_strlen(char *);
int		file_to_wordtab(char *);
void		my_putchar(char);
void		char_print(char);
void		hugues_error(int);
unsigned int	string_length(char *);
void		string_print(char *, unsigned int, unsigned int, unsigned int);
unsigned int	string_search_next0(unsigned int, char *);
char		*string_search_next1(char *, unsigned int);
char		*string_search_next2(char *, unsigned int *,
				     unsigned int *, int);
char		*string_search_next3(char *, unsigned int, int);
unsigned int	string_search(char *, char *, unsigned int, unsigned int);
int		string_words_count(char *);
char		*string_concatenate(char *, char *);
char		*string_concatenate_length(char *, int, char *, int);
void		hugues_parameter_program_name(char *, header_t *);
void		hugues_parameter_program_comment(char *, header_t *);
void		hugues_simplify_count_next0(char **, unsigned int *,
					    unsigned int);
void		hugues_simplify_count_next1(char **, unsigned int *,
					    unsigned int);
void		hugues_simplify_count_next2(char **, unsigned int *,
					    unsigned int *, unsigned int *);
void		hugues_simplify_count_next3(char **, unsigned int *,
					    unsigned int *, unsigned int *);
void		hugues_simplify_count_next4(char **,
					    unsigned int *, unsigned int *);
void		hugues_simplify_count_next5(unsigned int *, unsigned int *);
void		hugues_simplify_count_next6(char **, unsigned int *,
					    unsigned int *, unsigned int *);
void		hugues_simplify_count_next7(char **, unsigned int *,
					    unsigned int *, unsigned int *);
unsigned int	hugues_simplify_count(char **);

void		hugues_simplify_create_next0(char **,
					     unsigned int *, unsigned int);
void		hugues_simplify_create_next1(char **,
					     unsigned int *, unsigned int);
char		*hugues_simplify_create_next2(char **, char *,
					      unsigned int *, unsigned int *);
char		*hugues_simplify_create_next3(char **, char *,
					      unsigned int *, unsigned int *);
void		hugues_simplify_create_next4(char **,
					     unsigned int *, unsigned int *);
char		*hugues_simplify_create_next5(char **, char *,
					      unsigned int *, unsigned int *);
char		*hugues_simplify_create_next6(char **, char *,
					      unsigned int *, unsigned int *);
char		*hugues_simplify_create_next7(char **, char *,
					      unsigned int *, unsigned int *);
void		hugues_simplify_create(char **, char *);
void		hugues_detect_header_programme_next0(char *, unsigned int,
					     unsigned int, header_t *);
void		hugues_detect_header_comment_next0(char *, unsigned int,
					   unsigned int, header_t *);
void		hugues_detect_header_programname(char *, header_t *);
void		hugues_detect_header_comment(char *, header_t *);
void		hugues_header_initialize(header_t *);
int		hugues_code_next(char *, char *, int);
char		*hugues_code(char *, int);
void		hugues_simplify_file_next0(char *, header_t *);
void		hugues_simplify_file(char **);

#endif /* !COREWAR_H_ */
