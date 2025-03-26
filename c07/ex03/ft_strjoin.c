/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:25:18 by zel-ghab          #+#    #+#             */
/*   Updated: 2025/02/24 17:54:35 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	lensep;
	int	lentab;

	j = 0;
	i = 0;
	lensep = 0;
	lentab = 0;
	if (!strs)
		return (0);
	while (sep[lensep])
		lensep++;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			lentab++;
			j++;
		}
		i++;
	}
	return (lentab + (lensep * (size - 1)));
}

void	ft_conca(char **strs, char *tab, char *sep, int size)
{
	int	i;
	int	j;
	int	cpt;

	i = 0;
	cpt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[cpt++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i < size - 1)
			tab[cpt++] = sep[j++];
		i++;
	}
	tab[cpt] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		length;

	if (size == 0)
	{
		tab = malloc(sizeof(char));
		if (tab == NULL)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	length = ft_len(strs, sep, size);
	tab = malloc(sizeof(char) * (length + 1));
	if (!tab)
		return (NULL);
	else
		ft_conca(strs, tab, sep, size);
	return (tab);
}
/*
#include <stdio.h>
#include <unistd.h>
int main()
{
	char *strs[4];
	strs[0] = "Zaki";
	strs[1] = "Chan";
	strs[2] = NULL;
	strs[3] = "ELFAMOSO";
	char *sep = "-";
	char *tab = ft_strjoin(4, strs, sep);
	int i = 0;
	while (tab[i])
	{
		write(1, &tab[i], 1);
		i++;
	}
	free(tab);
	return (0);
}
*/
