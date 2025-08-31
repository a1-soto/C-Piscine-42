/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:12:22 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/20 13:27:52 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	interger_char(int number, char array_number[11])
{
	int		count;
	int		number_copy;

	count = 0;
	number_copy = number;
	if (number_copy == -2147483648)
		write(1, "2147483648", 11);
	else if (number_copy == 0)
	{
		array_number[count] = '0';
		count++;
	}
	while (number_copy > 0)
	{
		array_number[count] = (number_copy % 10) + '0';
		number_copy = number_copy / 10;
		count++;
	}
	array_number[10] = count;
	return (0);
}

void	ft_putnbr(int number)
{
	char	array_number[11];
	int		number_copy;
	int		max_index;

	number_copy = number;
	if (number_copy < 0)
	{
		write(1, "-", 1);
		number_copy = -number_copy;
	}
	interger_char(number_copy, array_number);
	max_index = array_number[10];
	while (max_index > 0)
	{
		write(1, &array_number[max_index - 1], 1);
		max_index--;
	}
}

int     main(int argc, char **argv)
{
    ft_putnbr(atoi(argv[1]));
	return (0);
}
