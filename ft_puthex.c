/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:13:43 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/18 09:39:49 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_writhex(int *nbr, unsigned long int hex)
{
	if (hex > 15)
	{
		ft_writhex(nbr, hex / 16);
		ft_writhex(nbr, hex % 16);
	}
	else
	{
		if (hex < 10)
			ft_putchar_nbr(nbr, hex + '0');
		else
			ft_putchar_nbr(nbr, hex + 87);
	}
}

void	ft_puthex(int *nbr, unsigned long int hex)
{
	if (hex == 0)
		ft_strlen_pf(nbr, "(nil)");
	else
	{
		write (1, "0x", 2);
		(*nbr) += 2;
		ft_writhex(nbr, hex);
	}
}
