/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:03:07 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/16 23:04:31 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b);
}
