/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:28:50 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 16:45:29 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "do_op.h"

void	ft_main_delegate2(char **argv, int a, int b)
{
	if (argv[2][0] == '/')
	{
		if (b == 0)
		{
			ft_put_div_zero_error();
			return ;
		}
		ft_calc(a, b, &ft_divide);
	}
	if (argv[2][0] == '*')
		ft_calc(a, b, &ft_times);
	if (argv[2][0] == '%')
	{
		if (b == 0)
		{
			ft_put_mod_zero_error();
			return ;
		}
		ft_calc(a, b, &ft_modulo);
	}
}

void	ft_main_delegate(char **argv)
{
	int a;
	int b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		ft_calc(a, b, &ft_plus);
	else if (argv[2][0] == '-')
		ft_calc(a, b, &ft_minus);
	else
		ft_main_delegate2(argv, a, b);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
		argv[2][0] != '*' && argv[2][0] != '%') || ft_strlen(argv[2]) != 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	ft_main_delegate(argv);
	return (0);
}
