/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:10:22 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/18 17:17:49 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (nb != 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(0));
}
*/
