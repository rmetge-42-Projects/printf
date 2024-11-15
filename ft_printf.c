/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:35:55 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/15 12:00:46 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				ft_putchar_fd(va_arg(args, char), 1);
			else if (format[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (format[i] == 'p')
				ft_putstr_fd(va_arg(args, void *), 1);
			else if (format[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (format[i] == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (format[i] == 'u')
				ft_putunsigned(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				ft_puthexalow(va_arg(args, unsigned int));
			else if (format[i] == 'X')
				ft_puthexaupp(va_arg(args, unsigned int));
			else if (format[i] == '%')
				ft_putchar_fd('%', 1);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
		}
		i++;
	}
	return;
}

int	main(void)
{
	ft_printf("coucoou");
	printf("coucou");
}