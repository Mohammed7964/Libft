/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:51:53 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/20 18:54:17 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	size_t	i;

	if (size && ((count * size) / size) != count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < (count * size))
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
