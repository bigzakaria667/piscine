/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:11:22 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/15 18:46:00 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] == s2[i]) && s2[i] != '\0' && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char s1[] = "sdf";
	char s2[] = "sdf6";
	unsigned int n = 3;

	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
}
*/
