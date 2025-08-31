/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:13:03 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/20 13:07:59 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_pair(int left, int right, char array_number[10])
{
	write (1, &array_number[left / 10], 1);
	write (1, &array_number[left % 10], 1);
	write (1, " ", 1);
	write (1, &array_number[right / 10], 1);
	write (1, &array_number[right % 10], 1);
	if (!(left == 98 && right == 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	array_number[10];
	int		i;
	int		left_number;
	int		right_number;

	i = 0;
	while (i < 10)
	{
		array_number[i] = '0' + i;
		i++;
	}
	left_number = 0;
	while (left_number <= 98)
	{
		right_number = left_number + 1;
		while (right_number <= 99)
		{
			write_pair(left_number, right_number, array_number);
			right_number++;
		}
		left_number++;
	}
}
/*
int     main(void)
{
    ft_print_comb2();
    return (0);
}
*/
