/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_putstr_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:25:05 by pstubbs           #+#    #+#             */
/*   Updated: 2018/08/29 18:28:13 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

void	f_putstr_err(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
}
