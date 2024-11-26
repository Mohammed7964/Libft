/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:41:41 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/16 16:46:36 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			cc;
	char			*last_occurrence;
	unsigned int	i;

	cc = (char)c;
	last_occurrence = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
		{
			last_occurrence = (char *)&s[i];
		}
		i++;
	}
	if (s[i] == cc)
	{
		return ((char *)&s[i]);
	}
	return ((char *)last_occurrence);
}
