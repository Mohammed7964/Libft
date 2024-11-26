/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:38:54 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/21 11:39:52 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (h);
	while (i < len && h[i])
	{
		while (h[i + j] == n[j] && n[j] && i + j < len)
		{
			j++;
		}
		if (n[j] == '\0')
			return (h + i);
		j = 0;
		i++;
	}
	return (NULL);
}
