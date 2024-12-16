/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:46:26 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/18 17:21:25 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_factorial(abc));
}
*/
