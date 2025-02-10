/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_comb.c									:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: zel-ghab <zel-ghab@student.s19.be>			+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/07/03 11:51:30 by zel-ghab		   #+#	  #+#			  */
/*	 Updated: 2024/07/03 17:29:58 by zel-ghab		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	affichage(char a, char b, char c)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9' && b <= '9' && c <= '9')
	{
		affichage(a, b, c);
		if (c == '9')
		{
			c = '0';
			b++;
		}
		if (b == '9')
		{
			b = '0';
			a++;
		}
		c++;
	}
}

/*int main()
{
	ft_print_comb();
	return(0);
}
*/
