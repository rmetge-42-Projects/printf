/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:47:54 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/15 10:49:34 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

void	ft_puthexaupp(unsigned int hex)
{
	if (hex > 16)
	{
		ft_puthexalow(hex / 16);
		ft_puthexalow(hex % 16);
	}
	else
	{
		if (hex < 10)
			ft_putchar_fd(hex + '0', 1);
		else
			ft_putchar_fd(hex + 'A', 1);
	}
}