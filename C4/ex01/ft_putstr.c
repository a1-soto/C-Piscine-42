/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:10:21 by angesoto          #+#    #+#             */
/*   Updated: 2025/09/02 11:24:20 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (i < str[i] && str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
/*
int main()
{
	char *str = "Carry on Wayward Son";
	ft_putstr(str);
	return (0);
}*/
