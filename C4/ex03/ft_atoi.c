/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:42:44 by angesoto          #+#    #+#             */
/*   Updated: 2025/09/03 12:08:48 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sing_count;
	int	sing;
	int	result;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sing_count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing_count++;
		i++;
	}
	sing = 1;
	if (sing_count % 2 == 1)
		sing = -1;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sing);
}
/*
#include <stdio.h>
int	main()
{
	char *str = " ---+--+1234ab567";
	ft_atoi(str);
	printf("%d",ft_atoi(str));
	return (0);
}*/
