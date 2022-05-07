/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:25:02 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/02 06:41:26 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static	size_t	count(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = count(n);
	nb = n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nb)
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}
