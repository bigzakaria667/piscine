/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:10:46 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/15 11:42:58 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[cpt])
		{
			while (to_find[cpt] && (str[i + cpt] == to_find[cpt]))
				cpt++;
			if (to_find[cpt] == '\0')
				return (str + i);
			else if (str[i + 1] == '\0')
				return (0);
			cpt = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
  char z[] = "Zakkaria";
  char find[] = "ia";
  printf("%s", ft_strstr(z, find));
  //printf("%s", strstr(z,find));
  return 0;
}
*/
