/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_ldi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:15:10 by wseegers          #+#    #+#             */
/*   Updated: 2018/09/26 16:41:26 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_function.h"

void	op_ldi(struct s_process *bot)
{
	int		offset;
	char	big_e[4];
	int		*args;

	args = bot->args;
	args[0] = (bot->is_reg[0]) ? bot->reg[args[0]] : args[0];
	args[1] = (bot->is_reg[1]) ? bot->reg[args[1]] : args[1];
	offset = bot->current_pc + WRAP_IDX(args[0] + args[1]);
	big_e[0] = g_env.memory[WRAP_MEM(offset++)];
	big_e[1] = g_env.memory[WRAP_MEM(offset++)];
	big_e[2] = g_env.memory[WRAP_MEM(offset++)];
	big_e[3] = g_env.memory[WRAP_MEM(offset)];
	bot->reg[args[2]] = f_big_to_little_endian(big_e);
	bot->carry = !(bot->reg[args[2]]);
}
