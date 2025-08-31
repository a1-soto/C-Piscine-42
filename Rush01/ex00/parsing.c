/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripaparo <ripaparo@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:37:36 by ripaparo          #+#    #+#             */
/*   Updated: 2025/08/23 22:25:18 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_error(void);
void	ft_square(char *str);

int	ft_check_size(char *str)
{
	int		size;

	size = ft_strlen(str);
	if (size != 31)
	{
		ft_error();
		return (1);
	}
	return (0);
}

int	ft_check_tokens(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '4') || str[i] == 32)
			i++;
		else
		{
			ft_error();
			return (1);
		}
	}
	return (0);
}

int	parsing(char *str)
{
	if (ft_check_size(str))
		return (1);
	if (ft_check_tokens(str))
		return (1);
	ft_square(*str);
}
