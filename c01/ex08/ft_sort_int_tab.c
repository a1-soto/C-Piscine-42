/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:20:33 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/25 18:31:47 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	n;

	i = 0;
	n = 1;
	while (n < size)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		n++;
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
	int array[9] = {8, 3, 7, 2, 9, 1,4,6,5};
	
	count_array_print(array, 9);
	ft_sort_int_tab(array, 9);
	count_array_print(array, 9);
    return (0);
}
*/
