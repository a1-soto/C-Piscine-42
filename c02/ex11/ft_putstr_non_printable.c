/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:42:41 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/27 19:54:47 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_char_hex(unsigned char ascii_number)
{
	char	*hex;

	hex = "0123456879abcdef";
	if (ascii_number > 15)
		ft_char_hex(ascii_number / 16);
	write(1, &hex[ascii_number % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			if ((unsigned char)str[i] < 16)
				write(1, "0", 1);
			ft_char_hex((unsigned char)str[i]);
		}
		i++;
	}
}
/*
int main()
{
	char str[] = "Hello\nHow are you?";
	ft_putstr_non_printable(str);
	return (0);
}*/
