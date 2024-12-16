/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:09:49 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/14 12:10:05 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 47 || str[i] > 58)
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
	char	zizi[] = "123fsdf567890";
	printf ("%d", ft_str_is_numeric(zizi));
}
*/
