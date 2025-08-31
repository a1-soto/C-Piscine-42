/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 09:28:51 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/20 13:04:16 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(char hundres, char tens, char unit)
{
	write (1, &hundres, 1);
	write (1, &tens, 1);
	write (1, &unit, 1);
}

void	ft_print_comb(void)
{
	char	hundres;
	char	tens;
	char	unit;

	hundres = '0';
	while (hundres <= '7')
	{
		tens = hundres +1;
		while (tens <= '8')
		{
			unit = tens + 1;
			while (unit <= '9')
			{
				write_number(hundres, tens, unit);
				if (hundres != '7'
					|| tens != '8' || unit != '9')
					write (1, ", ", 2);
				unit++;
			}
			tens++;
		}
		hundres++;
	}
}
/*
int     main(void)
{
	ft_print_comb();
    return (0);
}
*/
