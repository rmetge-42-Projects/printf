/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:35:55 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/18 09:41:03 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		nbr;

	va_start(args, format);
	i = 0;
	nbr = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				ft_putchar_nbr(&nbr, va_arg(args, int));
			else if (format[i] == 's')
				ft_strlen_pf(&nbr, va_arg(args, char *));
			else if (format[i] == 'p')
				ft_puthex(&nbr, (unsigned long int)va_arg(args, void *));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_nbrlen(&nbr, va_arg(args, int));
			else if (format[i] == 'u')
				ft_putunsigned(&nbr, va_arg(args, unsigned int));
			else if (format[i] == 'x')
				ft_puthexalow(&nbr, va_arg(args, unsigned int));
			else if (format[i] == 'X')
				ft_puthexaupp(&nbr, va_arg(args, unsigned int));
			else if (format[i] == '%')
				ft_putchar_nbr(&nbr, '%');
		}
		else
			ft_putchar_nbr(&nbr, format[i]);
		i++;
	}
	return (nbr);
}

// int	main(void)
// {
// 	//char *N = NULL;
// 	//unsigned int u = 17;
// 	void * v = 0;
// 	//int	i = -2147483648;
// 	//ft_printf("%d", ft_printf("%p", some_var));
// 	printf("%d\n", ft_printf("%p", v));
// 	//printf("%d", printf("%p", some_var));
// 	printf("%d\n", printf("%p", v));
// }
