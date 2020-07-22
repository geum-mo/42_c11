/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:46:35 by gekang            #+#    #+#             */
/*   Updated: 2020/07/22 11:02:58 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
