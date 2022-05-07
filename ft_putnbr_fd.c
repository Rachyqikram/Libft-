/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:53:05 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/02 06:44:58 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (fd < 0)
		return ;
	if (i < 0)
	{
		ft_putstr_fd("-", fd);
		i *= -1;
	}	
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd (i % 10, fd);
	}
	else
		ft_putchar_fd (i + '0', fd);
}
