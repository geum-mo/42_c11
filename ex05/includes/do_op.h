/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:58:47 by gekang            #+#    #+#             */
/*   Updated: 2020/07/21 16:45:03 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_divide(int a, int b);
int		ft_times(int a, int b);
int		ft_modulo(int a, int b);

int		ft_atoi(char *str);

void	ft_calc(int a, int b, int (*f)(int, int));

void	ft_putchar(char c);
void	ft_put_div_zero_error(void);
void	ft_put_mod_zero_error(void);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);

#endif
