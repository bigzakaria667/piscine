/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:08:17 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/21 18:37:20 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i)
		{
			i++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int    main ()
{
    printf("%d", ft_is_prime(2147483647));
}
*/
