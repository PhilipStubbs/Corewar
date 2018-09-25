/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vis.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 10:45:59 by wseegers          #+#    #+#             */
/*   Updated: 2018/09/25 13:11:30 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VIS_H
# define S_VIS_H

# include "op.h"

typedef struct	s_vis
{
	int		m_l;
	int		m_c;
	int		process_code;
	int		fl;
	int		player_live[MAX_PLAYERS];
	int		player_forks[MAX_PLAYERS];
	char	**img;
	char	champs[4][PROG_NAME_LENGTH];
	char	desc[4][COMMENT_LENGTH];
	char	owner[MEM_SIZE];
}				t_vis;

#endif
