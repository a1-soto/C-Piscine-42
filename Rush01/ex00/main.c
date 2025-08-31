/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripaparo <ripaparo@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:35:22 by ripaparo          #+#    #+#             */
/*   Updated: 2025/08/23 22:11:20 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	parsing(char *str);
void	ft_error(void);

int	main(int argc, char *argv[])
{
	char	**square;

	square = malloc(4 * sizeof(char *));
	square = star_square(square);
	if (argc == 2)
		parsing(argv[1]);
	else
		ft_error();
	return (0);
}
