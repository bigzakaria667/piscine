/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:12:35 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/14 12:12:41 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > '~')
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
	printf (" %d ", ft_str_is_printable(zizi));
}
*/
