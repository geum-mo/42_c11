/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:03:24 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 19:38:35 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int count;

	i = 0 - 1;
	count = 0;
	while (++i < length)
	{
		if (f(tab[i]) != 0)
			count++;
	}
	return (count);
}
