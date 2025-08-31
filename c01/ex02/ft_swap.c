/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:36:41 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/21 11:54:07 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main()
{
	int	a;
	int	b;
	int	*p1;
	int	*p2;

	p1 = &a;
	p2 = &b;
	a = 50;
	b = 259;
	printf("Valor de a y b  antes de la función: %d, %d \n", a, b);
	ft_swap(p1, p2);
	printf("Valor de a y b despues de la función: %d, %d \n", a, b);
}
*/
