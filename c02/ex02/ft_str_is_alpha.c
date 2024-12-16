/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:04:57 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/13 20:03:54 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z')
		{
			return (0);
		}
		if (str[i] < 'a' && str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char	zizi[] = "zakaria";
	printf("%d", ft_str_is_alpha(zizi));
}
*/
