/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:53:19 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/24 16:51:02 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * max - min);
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
#include <unistd.h>
int main ()
{
	int min = 1;
	int max = 10;
	int i = 0;

	int *tab = ft_range(min, max);
	if (!tab)
	{
		printf("Error");
		return(0);
	}
	while(tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}

	return (0);
}
*/
