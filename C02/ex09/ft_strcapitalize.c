/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamehri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:33:32 by tamehri           #+#    #+#             */
/*   Updated: 2023/09/23 19:53:23 by rakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		newword;
	char	t;

	i = 0;
	newword = 1;
	while (str[i] != '\0')
	{
		t = str[i];
		if (t >= 'a' && t <= 'z' && newword == 1)
			str[i] = str[i] - 32;
		else if (t >= 'A' && t <= 'Z' && newword == 0)
			str[i] = str[i] + 32;
		if (t < 48 || (t > 57 && t < 65) || (t > 90 && t < 97) || t > 122)
			newword = 1;
		else
			newword = 0;
		i++;
	}
	return (str);
}
