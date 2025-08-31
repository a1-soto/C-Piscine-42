/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:00:12 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/25 18:22:32 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main (void)
{
	int a = 20;
	int b = 10;
	int solution;
	int rest;
	int *div;
	int *mod;
	div = &solution;
	mod = &rest;
	ft_div_mod(a, b, div, mod);
	printf("Value of %d divided by %d is %d \n", a, b, solution);
	printf("Value of %d module  %d is %d \n", a, b, rest);
}*/
