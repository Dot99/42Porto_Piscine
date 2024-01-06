/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:56:41 by gude-jes          #+#    #+#             */
/*   Updated: 2023/12/17 17:52:44 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase("abcdefghijkl"));
	printf("\n%d", ft_str_is_uppercase("AbcdEfghIjkl"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKL"));
	printf("\n%d", ft_str_is_uppercase("abc1defghijkl"));
	printf("\n%d", ft_str_is_uppercase("0123456789"));
}*/