/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:41:26 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 19:35:42 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	arr[1024];
	int	i;

	i = 0;
	while (nbr % 10 > 0)
	{
		arr[i] = nbr % 10;
		nbr /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(arr[i] + '0');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0 - 1;
	while (++i < length)
	{
		f(tab[i]);
	}
}
