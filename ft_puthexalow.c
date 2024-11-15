/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:05:18 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/15 10:40:59 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthexalow(unsigned int hex)
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
			ft_putchar_fd(hex + 'a', 1);
	}
}