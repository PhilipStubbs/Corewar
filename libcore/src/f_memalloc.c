/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_memalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:34:13 by kmarchan          #+#    #+#             */
/*   Updated: 2018/08/29 18:05:10 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/core.h"

void	*f_memalloc(size_t size)
{
	void *p;

	p = malloc(size);
	if (!p)
		return (NULL);
	f_bzero(p, size);
	return (p);
}