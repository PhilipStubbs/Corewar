/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:11:51 by wseegers          #+#    #+#             */
/*   Updated: 2018/09/17 08:11:11 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "op_function.h"

void	(*op_function(int op_code))(struct s_process*)
{
	static void (*op[MAX_OP + 1])(struct s_process*);

	if (!op[1])
	{
		op[1] = op_live;
		op[2] = op_ld;
		op[3] = op_st;
		op[4] = op_add;
		op[5] = op_sub;
		op[6] = op_and;
		op[7] = op_or;
		op[8] = op_xor;
		op[9] = op_zjmp;
		op[10] = op_ldi;
		op[11] = op_sti;
		op[12] = op_fork;
		op[13] = op_ld;
		op[14] = op_lldi;
		op[15] = op_lfork;
		op[16] = op_aff;
	}
	return (op[op_code]);
}