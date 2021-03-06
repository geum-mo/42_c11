/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:46:39 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 19:38:28 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0 - 1;
	while (tab[++i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
	}
	return (0);
}
