/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:37:27 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/04 18:33:06 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_affichage(char c)
{
	write(1, &c, 1);
}

void	ft_conversion(int nb1, int nb2)
{
	ft_affichage(nb1 / 10 + 48);
	ft_affichage(nb1 % 10 + 48);
	ft_affichage(32);
	ft_affichage(nb2 / 10 + 48);
	ft_affichage(nb2 % 10 + 48);
	if (nb1 != 98)
	{
		write(1, ",", 1);
		ft_affichage(32);
	}
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	nb2 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_conversion(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}

/*int main()
{
	ft_print_comb2();
	return(0);
}
*/
