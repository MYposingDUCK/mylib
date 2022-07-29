/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 17:49:27 by rdolf             #+#    #+#             */
/*   Updated: 2020/11/22 17:52:28 by rdolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t count)
{
	unsigned char *dest;

	dest = (unsigned char*)s;
	while (count-- > 0)
		*dest++ = 0;
}