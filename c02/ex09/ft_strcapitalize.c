/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitaze.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:39:17 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/14 14:06:18 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_condition(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		else if ((str[i] >= 0 && str [i] <= '/')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		else if ((str[i] >= ':' && str [i] <= '@')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		else if ((str[i] >= '[' && str [i] <= 96)
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		else if ((str[i] >= '{' && str [i] <= 127)
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
}

void	ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	ft_strupcase(str);
	i = 0;
	ft_condition(str);
	return (str);
}
/*
int	main() 
{
	int	i;

	i = 0;
	char zak[] = "zakAria ~le 9plus {bEau+dEs-Bg";
	ft_strcapitalize(zak);
	printf ("%s" ,ft_strcapitalize(zak));
}
*/
