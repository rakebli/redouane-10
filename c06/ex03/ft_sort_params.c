/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakebli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 04:17:14 by rakebli           #+#    #+#             */
/*   Updated: 2023/09/26 04:39:02 by rakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i]);
	i++;
	return (s1 -s2);
}

void	ft_print(char **tab, int size)
{
	int i;
	int g;

	i =1;
	while(i < size)
	{
		g = 0;
		while (tab[i][g])
		{
			write(1, &tab[i][g], 1);
			g++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char *av[])
{
	int i;
	int g;
	char *swap;

	i = 1;
	while (1 < ac)
	{
		g = i;
		while (g < ac)
		{
			if (ft_strcmp(av[i], av[g]) > 0 && i != g)
			{
				swap = av[i];
				av[i] = av[g];
				av[g] = swap;
			}
			g++;
		}
		i++;
	}
	ft_print(av, ac);
	return (0);
}
