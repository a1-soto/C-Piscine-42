/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:06:25 by angesoto          #+#    #+#             */
/*   Updated: 2025/09/01 20:10:20 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest) + 1;
	src_len = ft_strlen(src) + 1;
	if (dest_len == size)
		return (size + src_len);
	while ((size - dest_len - 1 > 0) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
int main ()
{
	char dest [50] = "I have ";
	char src [] = "..spoken!";
	unsigned int size = 9;
	ft_strlcat(dest, src, size);
	printf ("El string %s retorna %u porque es la suma de %i y %i",
 dest, ft_strlcat(dest, src, size), ft_strlen(src) + 1, ft_strlen(dest)+ 1);
return (0);
}*/
