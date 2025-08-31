/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:49:02 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/17 19:03:47 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	col;

	ft_putchar('A');
	col = 2;
	while (col < x)
	{
		ft_putchar ('B');
		col++;
	}
	if (col == x)
		ft_putchar('C');
	ft_putchar('\n');
}

void	center_lines(int x, int y)
{
	int	rows;
	int	col;

	rows = 1;
	col = 0;
	while (rows > 0 && rows < y - 1)
	{
		col = 0;
		ft_putchar ('B');
		col++;
		while (col > 0 && col < x - 1)
		{
			ft_putchar (' ');
			col++;
		}
		if (col == x - 1)
			ft_putchar('B');
		rows++;
		ft_putchar('\n');
	}
}

void	last_line(int x)
{
	int	rows;
	int	col;

	rows = x - 1;
	ft_putchar('C');
	col = 2;
	while (col < x)
	{
		ft_putchar('B');
		col++;
	}
	if (col == x)
		ft_putchar('A');
}

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
		write(1, "ERROR!! The argument can't be negative", 39);
	else if (x == 0 || y == 0)
		write(1, "", 1);
	else
	{
		first_line(x);
		center_lines(x, y);
		if (y > 1)
		{
			last_line(x);
		}
	}
}
