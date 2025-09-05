/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:25:16 by angesoto          #+#    #+#             */
/*   Updated: 2025/09/03 10:41:19 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_long(long number)
{
	if (number > 10)
		ft_putnbr_long(number / 10);
	ft_putchar(number % 10 + '0');
}

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	ft_putnbr_long(number);
}
/*
int main()
{
	ft_putnbr(-2548795);
	return (0);
}*/
