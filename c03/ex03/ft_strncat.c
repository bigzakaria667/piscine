/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:50:18 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/15 19:14:50 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	cpt;

	i = 0;
	cpt = 0;
	while (dest[i])
	{
		i++;
	}
	while (cpt < nb && src[cpt])
	{
		dest[i] = src[cpt];
		cpt++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[20] = "zak";
	char src[20] = "bg";
	unsigned int z = 2;

	printf("%s\n", ft_strncat(dest, src, z));
	printf("%s", strncat(dest, src, z));
}
*/
