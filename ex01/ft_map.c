/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:46:35 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 19:38:04 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int arr[1024];
	int i;

	i = 0;
	while (nbr % 10 > 0)
	{
		arr[i] = nbr % 10;
		nbr /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(arr[i] + '0');
	ft_putchar('\n');
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0 - 1;
	while (++i < length)
	{
		f(tab[i]);
	}
}

int		ft_times_two(int nbr)
{
	nbr *= 2;
	return (nbr);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *new_tab;

	if (!(new_tab = (int *)malloc(length * sizeof(int))))
		return (0);
	i = 0 - 1;
	while (++i < length)
	{
		new_tab[i] = f(tab[i]);
	}
	return (new_tab);
}
