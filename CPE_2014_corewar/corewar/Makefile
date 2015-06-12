##
## Makefile for corewar in /home/lancel_e/rendu/CPE_2014_corewar/corewar
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Sun Apr 13 23:38:29 2014 lancel_e
## Last update Sun Apr 13 23:38:31 2014 lancel_e
##

CC	= gcc

SRC	= bin_maker.c \
	  bin_manager.c \
	  call_inst.c \
	  corexec.c \
	  data.c \
	  err_manage.c \
	  exe.c \
	  get_code.c \
	  get_comment.c \
	  get_file_name.c \
	  get_info.c \
	  get_name.c \
	  inst_done.c \
	  inst_one.c \
	  inst_three.c \
	  inst_two.c \
	  load_champ.c \
	  main.c \
	  my_str.c \
	  pars.c \
	  who_live.c \
	  special_add.c

NAME	= corewar

OBJ	= $(SRC:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
