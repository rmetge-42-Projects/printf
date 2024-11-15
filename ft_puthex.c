/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:13:43 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/15 15:51:22 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_writhex(unsigned long int hex)
{
	if (hex > 16)
	{
		ft_writhex(hex / 16);
		ft_writhex(hex % 16);
	}
	else
	{
		if (hex < 10)
			ft_putchar_fd(hex + '0', 1);
		else
			ft_putchar_fd(hex + 87, 1);
	}
}

void	ft_puthex(unsigned long int hex)
{
	write (1, "0x", 2);
	ft_writhex(hex);
}