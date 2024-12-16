/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:50:47 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/08 13:34:15 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main()
{
	int	nbr1 = 4;
	int	nbr2 = 2;

	ft_ultimate_div_mod(&nbr1, &nbr2);
}
*/
