/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:55:41 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/18 17:37:06 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			result = result * nb;
			i++;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(10, 5));
}
*/
