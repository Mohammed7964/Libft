/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:26:45 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/18 16:35:54 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;

	slen = ft_strlen(src);
	if (dstsize == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[i] && dlen + i < dstsize - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}
