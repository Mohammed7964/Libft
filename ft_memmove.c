/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:46:21 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/21 11:44:00 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if ((tmp_dst > tmp_src) && (tmp_dst < tmp_src + len))
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
		ft_memcpy(tmp_dst, tmp_src, len); 
	return (dst);
}
