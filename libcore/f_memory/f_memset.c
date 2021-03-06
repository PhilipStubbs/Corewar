/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:34:43 by WSeegers          #+#    #+#             */
/*   Updated: 2018/05/28 06:29:34 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*f_memset(void *s, int c, size_t n)
{
	while (n > 0)
		((unsigned char*)s)[--n] = (unsigned char)c;
	return (s);
}
