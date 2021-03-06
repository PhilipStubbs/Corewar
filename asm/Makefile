# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/30 11:12:55 by kmarchan          #+#    #+#              #
#    Updated: 2018/09/14 12:07:33 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = asm
CC = clang
CFLAGS = -Wall -Wextra -Werror
INC1 := -I ../libcore/include/
INC2 := -I../liblist/include/

LIB := -L. ../libcore/libcore.a ../liblist/liblist.a

CORE_SRC = get_line.c main.c strip_line.c lex.c \
			parse_header.c token_util.c token_validate.c \
			parse_instructions.c parse_set_labels.c parse_label_util.c \
			instruction_util.c write_to_bin.c  write_header_to_bin.c \
			lex_util.c lex_util2.c lex_add_tokens.c lex_add_tokens2.c \
			lex_add_tokens3.c asm_verbose.c print_lex_tokens.c
CORE = $(addprefix src/, $(CORE_SRC))

OBJ_LIST = $(patsubst %.c, %.o, $(CORE))
BIN_PATH = obj
BIN = $(addprefix $(BIN_PATH)/, $(OBJ_LIST))
DEP := $(BIN:%.o=%.d)

all : $(NAME)

lib: 
	make re -C ../libcore/
	make re -C ../liblist/

$(NAME) : $(BIN)
	$(CC) $(CFLAGS) $(INC1) $(INC2) $(LIB) -o $@ $^ 

$(BIN_PATH)/%.o :  %.c
	@mkdir -p $(BIN_PATH)
	@mkdir -p $(addprefix $(BIN_PATH)/,$(dir $<))
	$(CC) $(CFLAGS) $(INC1) $(INC2) -MMD -c $< -o $@

-include $(DEP)

clean :
	rm -rf $(BIN_PATH)

fclean : clean
	rm -f $(NAME)

re : fclean all
