/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 19:07:27 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/25 15:45:46 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	max_index;
	int	temp;

	count = 0;
	max_index = size -1;
	while (max_index >= count)
	{
		temp = tab[count];
		tab[count] = tab[max_index];
		tab[max_index] = temp;
		count++;
		max_index--;
	}
}
/*
#include <stdio.h>
void count_array_print(int *array, int size)
{
    int i;
    
	i = 0;
    while( i < size )
	{	
	printf("%d", array[i]);
    	i++;
	}
	printf("\n");
}

int main()
{
	int array[10] = {1, 2, 3, 4, 5, 6,7,8,9, 11};
	
	count_array_print(array, 10);
	ft_rev_int_tab(array, 10);
	count_array_print(array, 10);
    return (0);
}*/
