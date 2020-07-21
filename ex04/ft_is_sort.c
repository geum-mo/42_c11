/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:14:39 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 21:07:38 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int flag;

	i = 0 - 1;
	flag = 1;
	while (++i < length - 1 && flag)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			flag = 0;
	}
	if (flag != 1)
	{
		flag = 1;
		i = 0 - 1;
		while (++i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
		}
	}
	return (1);
}
