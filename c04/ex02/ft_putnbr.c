/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:21:32 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/17 12:19:06 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *diviseur, int *nb, char *print, int *temp)
{
	int	i;

	i = 0;
	while (*diviseur != 0)
	{
		if (i < 1)
			*temp = *nb / *diviseur;
		*temp = *nb / *diviseur % 10;
		*print = *temp + '0';
		write(1, print, 1);
		i++;
		*diviseur = *diviseur / 10;
	}
}

void	ft_number(int *temp, int *cpt)
{
	*cpt = 0;
	while (*temp != 0)
	{
		*temp = *temp / 10;
		*cpt = *cpt + 1;
	}
}

void	ft_div(int *i, int *cpt, int *diviseur)
{
	*diviseur = 1;
	*i = 1;
	while (*i < *cpt)
	{
		*diviseur = *diviseur * 10;
		*i = *i + 1;
	}
}

void	ft_putnbr(int nb)
{
	char	print;
	int		temp;
	int		diviseur;
	int		i;
	int		cpt;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
		temp = nb;
		ft_number (&temp, &cpt);
		ft_div(&i, &cpt, &diviseur);
		ft_print(&diviseur, &nb, &print, &temp);
	}
}
/*
int    main(void)
{
    ft_putnbr(-20000);
    return 0;
}
*/
