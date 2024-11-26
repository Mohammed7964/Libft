/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:31:10 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/16 14:05:58 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dste;
	unsigned char	*srce;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dste = (unsigned char *) dst;
	srce = (unsigned char *) src;
	if (dste == srce)
		return (dst);
	while (i < n)
	{
		dste[i] = srce[i];
		i++;
	}
	return (dst);
}
