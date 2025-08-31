/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:58:42 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/25 18:24:34 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	solution;
	int	rest;

	solution = *a / *b;
	rest = *a % *b;
	*a = solution;
	*b = rest;
}
/*
#include <stdio.h>
int main (void)
{
	int number_1 = 11;
	int number_2 = 5;
	int *a;
	int *b;
	a = &number_1;
	b = &number_2;
	printf("Value of %d \n", number_1);
    printf("Value of %d \n", number_2);

	ft_ultimate_div_mod(a , b);
	printf("Value of %d \n", number_1);
	printf("Value of %d \n", number_2);
}
*/
