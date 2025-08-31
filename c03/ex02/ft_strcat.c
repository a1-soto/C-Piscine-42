/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:35:49 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/31 13:12:07 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count_dest;
	int	count_src;

	count_dest = 0;
	count_src = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0')
	{
		dest[count_dest + count_src] = src[count_src];
		count_src++;
	}
	dest[count_dest + count_src] = '\0';
	return (0);
}
/*
#include <stdio.h>
int main()
{
    char dest[100] = "In code we trust.";
    char src[] = "Do we?";
    ft_strcat(dest, src);
	printf("%s", dest);	
    return (0);
}*/
