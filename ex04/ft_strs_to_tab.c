/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cepolat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:16:10 by cepolat           #+#    #+#             */
/*   Updated: 2022/01/31 14:53:26 by cepolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	tab = malloc(sizeof(*tab) * (size + 1));
	if (!(tab))
		return (NULL);
	while (i < size)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab2;
	int				i;

	i = 0;
	tab2 = malloc(sizeof(*tab2) * (ac + 1));
	if (!(tab2))
		return (NULL);
	while (i < ac)
	{
		tab2[i].size = ft_strlen(av[i]);
		tab2[i].str = av[i];
		tab2[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab2[i].size = 0;
	tab2[i].str = 0;
	tab2[i].copy = 0;
	return (tab2);
}
