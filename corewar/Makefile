# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/30 11:12:55 by kmarchan          #+#    #+#              #
#    Updated: 2018/09/27 11:41:30 by wseegers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = corewar
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
INC1 := -I ../libcore/include/
INC2 := -I ../liblist/include/

LIB := -L ../libcore/ -lcore -L ../liblist/ -llist -lcurses

CORE_SRC = main.c process_create.c load_bot.c debug_util.c op_function.c \
		   op_live.c op_sti.c op_and.c op_zjmp.c op_ld.c op_st.c op_fork.c \
		   op_add.c op_xor.c op_sub.c op_or.c op_ldi.c op_lldi.c op_lfork.c \
		   op_aff.c get_next_op.c battle_loop.c get_next_op_util.c \
		   handle_args.c visual.c prep_vis.c battle_loop_util.c \
		   ascii_text.c charge_ascii.c authors.c gui_box_key.c intro_vis.c \
		   scrsize.c vis_ops.c gui_data.c battle_loop_vis.c vm_sound.c
CORE = $(addprefix src/, $(CORE_SRC))

OBJ_LIST = $(patsubst %.c, %.o, $(CORE))
BIN_PATH = obj
BIN = $(addprefix $(BIN_PATH)/, $(OBJ_LIST))
DEP := $(BIN:%.o=%.d)
SND_PATH = $(realpath ../sound/Corewar_VM_Sound.mov)

all : $(NAME)

lib: 
	make -C ../libcore/
	make -C ../liblist/

$(NAME) : $(BIN)
	$(CC) $(CFLAGS) $(INC1) $(INC2) $(LIB) -o $@ $^ 

$(BIN_PATH)/%.o :  %.c
	@mkdir -p $(BIN_PATH)
	@mkdir -p $(addprefix $(BIN_PATH)/,$(dir $<))
	$(CC) -DSOUND='"$(SND_PATH)"' $(CFLAGS) $(INC1) $(INC2) -MMD -c $< -o $@


-include $(DEP)

clean :
	rm -rf $(BIN_PATH)

fclean : clean
	rm -f $(NAME)

re : fclean all
