##
## Makefile for asm in /home/lancel_e/rendu/CPE_2014_corewar/asm
## 
## Made by lancel_e
## Login   <lancel_e@epitech.net>
## 
## Started on  Sun Apr 13 23:37:13 2014 lancel_e
## Last update Sun Apr 13 23:37:14 2014 lancel_e
##

CC	= gcc

SRC	= asm_parser_code.c \
	  asm_parser_detect.c \
	  asm_parser_simplify.c \
	  asm_parser_simplify_count_part1.c \
	  asm_parser_simplify_count_part2.c \
	  asm_parser_simplify_create_part1.c \
	  asm_parser_simplify_create_part2.c \
	  asm_string_advanced.c \
	  asm_string_basic.c \
	  asm_string_search.c \
	  get_next_line.c \
	  long_print.c \
	  my_strcat.c \
	  my_strdup.c \
	  parser.c \
	  print_func.c \
	  realloc_tab.c

NAME	= asm

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
