/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_vis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <kmarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 11:08:11 by kmarchan          #+#    #+#             */
/*   Updated: 2018/09/21 13:55:21 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"
#include "visualiser.h"

static void			print_champ_names(t_vis *vis, int i)
{
	wattron(stdscr, A_BOLD);
	mvprintw(40, FOV2 - (f_strlen(vis->champs[i]) / 2), "%s", vis->champs[i]);
	mvprintw(42, FOV2 - (f_strlen(vis->desc[i]) / 2), "\"%s\"", vis->desc[i]);
	refresh();
	usleep(1500000);
	wattroff(stdscr, A_BOLD);
}

static void			champ_intro(t_vis *vis)
{
	unsigned int i;

	i = -1;
	clear_box(55, 173, 6, 10);
	print_logo(7, FOV2 - (77 / 2));
	the_corewar();
	while (++i < g_env.player_total)
	{
		clear_box(55, 173, 6, 10);
		print_logo(7, FOV2 - (77 / 2));
		the_champions();
		print_champ_names(vis, i);
	}
	clear_box(55, 173, 6, 10);
	print_logo(7, FOV2 - (77 / 2));
	ready();
	clear_box(55, 173, 6, 10);
	print_logo(7, FOV2 - (77 / 2));
	set();
	charge();
	refresh();
	usleep(1500000);
}

void				intro(void)
{
	t_vis *vis;

	vis = &g_env.vis_env;
	init_col();
	wattron(stdscr, COLOR_PAIR(5));
	print_core(0, 0);
	refresh();
	usleep(100000);
	wattroff(stdscr, COLOR_PAIR(5));
	clear_box(55, 173, 6, 10);
	refresh();
	champ_intro(vis);
}
