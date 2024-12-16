/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:49:05 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/21 18:38:07 by zel-ghab         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	ft_is_prime(nb);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (ft_is_prime(nb + i) != 1)
			i++;
	if (ft_is_prime(nb + i) == 1)
		return (nb + i);
	return (0);
}
/*
#include <stdio.h>
int    main ()
{
    printf("%d", ft_find_next_prime(999999));
}
*/
