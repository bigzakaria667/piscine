/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:36:39 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/21 18:05:47 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	result;

	result = 0;
	i = 0;
	negatif = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (negatif % 2 != 0)
		result = result * -1;
	return (result);
}
int main()
{
	char str[] = "    --2147483a14";
	printf("%d", ft_atoi(str));
	return (0);
}
