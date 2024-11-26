/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:46:26 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/18 14:17:28 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	start;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && check((char *)set, s1[start]))
		start++;
	while (end > start && check((char *)set, s1[end - 1]))
		end--;
	len = end - start + 1;
	str = (char *)malloc (len);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
