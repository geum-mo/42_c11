/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:33:20 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 20:08:24 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_swap(char **a, char **b)
{
	char		*tmp_a;

	tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}

int				ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void			ft_sort_str(char **tab, int size)
{
	int			i;
	int			j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swap(&tab[i], &tab[j]);
				continue;
			}
			j++;
		}
		i++;
	}
}

void			ft_sort_string_tab(char **tab)
{
	int			i;

	i = 0;
	while (tab[i] != 0)
		i++;
	ft_sort_str(tab, i);
}
