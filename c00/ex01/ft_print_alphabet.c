/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-ghab <zel-ghab@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:37:47 by zel-ghab          #+#    #+#             */
/*   Updated: 2024/07/04 18:27:43 by zel-ghab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre != 'z' + 1)
	{
		write(1, &lettre, 1);
		lettre++;
	}
}

/*int main(void)
{
	ft_print_alphabet();
	return(0);
}
*/
