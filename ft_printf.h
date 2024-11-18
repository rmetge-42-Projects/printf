/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:44:17 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/18 09:42:36 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"

void	ft_putunsigned(int *nbr, unsigned int n);
void	ft_puthexalow(int *nbr, unsigned int hex);
void	ft_puthexaupp(int *nbr, unsigned int hex);
void	ft_puthex(int *nbr, unsigned long int hex);
void	ft_putchar_nbr(int *nbr, char c);
void	ft_nbrlen(int *nbr, int n);
void	ft_strlen_pf(int *nbr, char *str);
int		ft_printf(const char *format, ...);

#endif