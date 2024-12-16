/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:39:07 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/15 18:49:50 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (dest[i])
		i++;
	while (src[cpt] != '\0')
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
	char dest[15] = "zak";
	char src[] = "bg";
	char dest2[15] = "zak";
	char src2[] = "bg";

	printf("%s\n", strcat(dest, src));
	printf("%s", ft_strcat(dest2, src2));
}
*/
