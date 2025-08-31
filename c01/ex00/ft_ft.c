/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:04:27 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/20 18:18:56 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	*nbr;
	
	a = 0;
	nbr = &a;
	printf("Valor de a antes de la función: %d \n", a);
	ft_ft(nbr);
	printf("Valor de a despues de la función: %d \n", a);
}
*/
