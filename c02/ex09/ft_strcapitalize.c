/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:17:55 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/27 12:07:18 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && start == 0)
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && start == 1)
			str[i] = str[i] - 32;
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
			start = 1;
		else
			start = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main ()
{
	char strg[] = "iN GoD-we+trusH";
	printf("%s\n", ft_strcapitalize (strg));
	return (0);
}*/
