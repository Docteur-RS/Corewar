/*
** all.h for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
** 
** Made by lancel_e
** Login   <lancel_e@epitech.net>
** 
** Started on  Sun Apr 13 23:08:22 2014 lancel_e
** Last update Sun Apr 13 23:08:23 2014 lancel_e
*/

#ifndef ALL_H_
# define ALL_H_

# define PROG_NAME_LENGTH 128
# define COMMENT_LENGTH 2048
# define CYCLE_TO_DIE 1536
# define CYCLE_DELTA 4
# define NBR_LIVE 40
# define LEN_VM 6 * 1024
# define MEM_SIZE (6*1024)
# define IDX_MOD 512
# define MAX_ARGS_NUMBER	4
# define NAME_CMD_STRING ".name"
# define COMMENT_CMD_STRING ".comment"

typedef struct	s_file_name
{
  char		*one;
  int		size_one;
  char		*two;
  int		size_two;
  char		*three;
  int		size_three;
  char		*four;
  int		size_four;
}		t_file_name;

typedef struct	s_champion_exist
{
  int		one;
  int		two;
  int		three;
  int		four;
}		t_champion_exist;

typedef struct	s_fd
{
  int		fd_one;
  int		fd_two;
  int		fd_three;
  int		fd_four;
}		t_fd;

typedef struct	s_file
{
  char		*one;
  char		*two;
  char		*three;
  char		*four;
}		t_file;

typedef struct	s_champ
{

  char		*file;
  char		*name;
  char		*comment;
  char		*code;
  int		reg[16];
  int		pc;
  int		carry;
  int		alive;
  int		has_live;
  int		live_in_progress;
}		t_champ;

typedef struct	s_arena
{
  char		*arena;
  int		len_code_one;
  int		len_code_two;
  int		len_code_three;
  int		len_code_four;
  int		live_total;
}		t_arena;

typedef struct	s_global_info
{
  int		argc;
  int		die;
  int		delta;
  int		total_live;
}		t_global_info;

typedef struct		s_manage
{
  t_file		*file;
  t_champion_exist	*is_champion;
  t_champ		*one;
  t_champ		*two;
  t_champ		*three;
  t_champ		*four;
  t_fd			*fd;
  t_file_name		*f_name;
  t_arena		*arena;
  t_global_info		*gen;
}			t_manage;

int	bin_manager(t_manage *man, char **argv);
int	bin_manager_continue(t_manage *man, char **argv, int ret);
int	bin_manager_first_part(t_manage *man, char **argv);
int	bin_manager_second_part(t_manage *man, char **argv);
int	bin_manager_continue_first_part(t_manage *man, char **argv, int ret);
int	bin_manager_continue_second_part(t_manage *man, char **argv, int ret);
int	adressing_nonrelativ(t_manage *man, char inst, int num_champ);
int	operator_1(t_manage *man, char inst, int num_champ);
int	operator_2(t_manage *man, char inst, int num_champ);
int	carri(t_manage *man, char inst, int num_champ);
int	other(t_manage *man, char inst, int num_champ);
void	move_pc(t_manage *man, int champ, int more_pc);
int	hugues_create_int(char *pointer);
int	hugues_get_bit(unsigned char character, unsigned char position);
int	hugues_get_parameters(char character, unsigned char parameter);
int	corexec(t_manage *man, char inst, int num_champ);
void	*my_xmalloc_arena(int size);
void	*my_xmalloc(int size);
void	xfree_doc(void *var);
void	my_memset(char *str, int len);
void	err_msg(int i, char *str);
void	aff_alive(t_manage *man, int nb);
void	exe1(t_manage *man);
void	exe2(t_manage *man);
void	exe3(t_manage *man);
void	exe4(t_manage *man);
int	get_code_one(t_manage *man);
int	get_code_two(t_manage *man);
int	get_code_three(t_manage *man);
int	get_code_four(t_manage *man);
void	get_comment(t_manage *man);
void	get_comment_one(t_manage *man);
void	get_comment_two(t_manage *man);
void	get_comment_three(t_manage *man);
void	get_comment_four(t_manage *man);
int	get_file_name(t_manage *man, int argc, char **argv);
int	get_file_name_continue(t_manage *man, int argc, char **argv);
int	pars_name_file(char *str);
int	is_file_ok(t_manage *man);
void	get_info(t_manage *man);
void	get_info_2(t_manage *man);
void	get_name_one(t_manage *man);
void	get_name_two(t_manage *man);
void	get_name_three(t_manage *man);
void	get_name_four(t_manage *man);
int	add_inst(t_manage *man, int nb);
int	has_live(t_manage *man, char inst, int nb);
void	live_progress_move_pc(t_manage *man, int nb);
void	live_inst(t_manage *man, int nb);
int	st_inst();
int	sti_inst();
int	fork_inst();
int	lld_inst();
int	lldi_inst();
int	ld_inst();
int	zjump_inst();
int	ldi_inst();
int	lfork_inst();
int	sub_inst();
int	and_inst();
int	or_inst();
int	xor_inst();
int	aff_inst();
void	load_champion(t_manage *man, int pos, char *code, int len_code);
void	manage_load_champion(t_manage *man);
int	structures_manage(t_manage *man, char **argv, int argc);
void	ini_pc(t_manage *man, int argc);
void	ini_structure_2(t_manage *man, char **argv, int argc);
void	ini_structure(t_manage *man, char **argv, int argc);
int	main(int argc, char **argv);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr(int nb);
void	aff_tab(char **tab);
void	say_alive(t_manage *man);
int	is_survivor(t_manage *man);
int	master_pars(t_manage *man);
int	who_won(t_manage *man);
int	up_date(t_manage *man);
void	say_alive(t_manage *man);
int	who_lives(t_manage *man);
int	who_live_for_2(t_manage *man);
int	who_live_for_3(t_manage *man);
int	who_live_for_4 (t_manage *man);

void    get_type(t_manage *man, int *t1, int *t2, int nb);
void    for_final_one(t_manage *man, int nb, int *final1, int type1);
void    for_final_one_continue(t_manage *man, int nb, int *final1, int type1);
void    for_final_two(t_manage *man, int nb, int *final2, int type2);
void    for_final_two_continue(t_manage *man, int nb, int *final2, int type2);
void    add_end(t_manage *man, int nb, int final2, int final3);
int     add_inst(t_manage *man, int nb);
int     has_live(t_manage *man, char inst, int nb);
void    live_progress_move_pc(t_manage *man, int nb);
void    live_inst(t_manage *man, int nb);

#endif /* !ALL_H_ */
