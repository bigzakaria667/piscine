/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:44:59 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/13 21:37:00 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char source[] = "Zakaria";
	char destination[10];
	unsigned int taille = 3;
	ft_strlcpy(destination, source, taille);
	printf ("%d\n", ft_strlcpy(destination, source, taille));
	printf ("%lu", strlcpy(destination, source, 3));
}
*/
