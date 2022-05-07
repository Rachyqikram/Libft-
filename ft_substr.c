/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:23:57 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/02 05:23:46 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;
	size_t	lent;

	i = 0;
	if (!(s))
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	lent = ft_strlen(&s[start]);
	if (lent >= len)
		lent = len;
	tab = (char *)malloc(lent + 1);
	if (!tab)
		return (NULL);
	while ((char)s[start] && len > 0)
	{
		tab[i] = (char)s[start];
		start++;
		i++;
		len--;
	}
	tab[i] = '\0';
	return (tab);
}
