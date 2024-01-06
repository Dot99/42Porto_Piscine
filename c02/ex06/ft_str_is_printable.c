/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:39:01 by gude-jes          #+#    #+#             */
/*   Updated: 2023/12/19 08:44:05 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_printable("abcdefghijkl"));
	printf("\n%d", ft_str_is_printable("¢AbcdEfghIjkl"));
}*/