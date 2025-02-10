/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:55:13 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/04 14:06:36 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nombre;

	nombre = '0';
	while (nombre != '9' + 1)
	{
		write(1, &nombre, 1);
		nombre++;
	}
}
