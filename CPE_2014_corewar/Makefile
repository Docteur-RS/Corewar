##
## Makefile for Makefile in /home/lancel_e/Documents/DIVERS/script/base Makefile
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Tue Jan  7 14:24:41 2014 lancel_e
## Last update Sun Apr 13 22:25:32 2014 lancel_e
##

CC	= gcc

SRC_TWO = asm/asm_parser_code.c \
	  asm/asm_parser_detect.c \
	  asm/asm_parser_simplify.c \
	  asm/asm_parser_simplify_count_part1.c \
	  asm/asm_parser_simplify_count_part2.c \
	  asm/asm_parser_simplify_create_part1.c \
	  asm/asm_parser_simplify_create_part2.c \
	  asm/asm_string_advanced.c \
	  asm/asm_string_basic.c \
	  asm/asm_string_search.c \
	  asm/get_next_line.c \
	  asm/long_print.c \
	  asm/my_strcat.c \
	  asm/my_strdup.c \
	  asm/parser.c \
	  asm/print_func.c \
	  asm/realloc_tab.c

SRC	= corewar/bin_maker.c \
	  corewar/bin_manager.c \
	  corewar/call_inst.c \
	  corewar/corexec.c \
	  corewar/data.c \
	  corewar/err_manage.c \
	  corewar/exe.c \
	  corewar/get_code.c \
	  corewar/get_comment.c \
	  corewar/get_file_name.c \
	  corewar/get_info.c \
	  corewar/get_name.c \
	  corewar/inst_done.c \
	  corewar/inst_one.c \
	  corewar/inst_three.c \
	  corewar/inst_two.c \
	  corewar/load_champ.c \
	  corewar/main.c \
	  corewar/my_str.c \
	  corewar/pars.c \
	  corewar/who_live.c \
	  corewar/special_add.c

NAME	= ./corewar/corewar

NAME_TWO = ./asm/asm

OBJ	= $(SRC:.c=.o)

OBJ_TWO	= $(SRC_TWO:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_TWO)
	cc $(OBJ) -o $(NAME)
	cc $(OBJ_TWO) -o $(NAME_TWO)
clean:
	@$(RM) $(OBJ)
	@$(RM) $(OBJ_TWO)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(NAME_TWO)

re: fclean all

.PHONY: all clean fclean re
