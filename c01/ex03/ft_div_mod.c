/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:31:48 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/08 13:32:54 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main ()
{
	int nb1 = 4;
	int nb2 = 2;
	int resdiv;
	int resmod;

	ft_div_mod(nb1, nb2, &resdiv, &resmod);
}
*/
