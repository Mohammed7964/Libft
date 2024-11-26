/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-badd <mel-badd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:35:46 by mel-badd          #+#    #+#             */
/*   Updated: 2024/11/16 23:04:11 by mel-badd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	ft_copy(char *j, size_t nb, size_t len)
{
	while (nb != 0)
	{
		j[len--] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*j;
	int		len;
	long	nb;

	nb = n;
	len = ft_len(nb);
	j = (char *)malloc(len + 1);
	if (!j)
		return (NULL);
	if (n == 0)
	{
		j[0] = '0';
		j[1] = '\0';
		return (j);
	}
	if (n < 0)
	{
		j[0] = '-';
		nb = -nb;
	}
	j[len--] = '\0';
	ft_copy(j, nb, len);
	return (j);
}
