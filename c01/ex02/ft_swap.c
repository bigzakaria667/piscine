/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:07:05 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/08 13:31:44 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main ()
{
	int nbr1 = 1;
	int nbr2 = 2;

	ft_swap(&nbr1, &nbr2);

	write(1, &nbr1, 1);
	write(1, &nbr2, 1);
	
	return (0);
}
*/