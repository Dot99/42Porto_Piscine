/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-jes <gude-jes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:09:22 by gude-jes          #+#    #+#             */
/*   Updated: 2023/12/16 17:44:40 by gude-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int*a, int*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*void main()
{
	ft_swap(4, 6);
}*/
