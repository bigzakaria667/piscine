/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:55:03 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/08 17:38:07 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;

	i = 0;
	size--;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		i++;
		size--;
	}
}
/*
int		main(void)
{
	int	tabf[] = {1, 2, 3, 4, 5, 6, 7};
	int	size = 7;

	ft_rev_int_tab(tabf, size);
	int cpt = 0;

	while(cpt < size)
	{
		printf("%d",tabf[cpt]);
		cpt++;
	}
}
*/
