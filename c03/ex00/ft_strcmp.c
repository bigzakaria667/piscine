/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:00:07 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/15 18:42:57 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char s1[] = "Ai23";
	char s2[] = "a123";
	
	printf("%d\n", strcmp(s1, s2));
	printf("%d", ft_strcmp(s1, s2));
}
*/
