/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmetge <rmetge@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:44:17 by rmetge            #+#    #+#             */
/*   Updated: 2024/11/15 12:13:31 by rmetge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putunsigned(unsigned int n);
void	ft_puthexalow(unsigned int hex);
void	ft_puthexaupp(unsigned int hex);

#endif