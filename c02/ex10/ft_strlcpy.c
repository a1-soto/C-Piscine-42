/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 19:50:46 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/27 19:45:21 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	lenght;

	count = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	if (size == 0)
		return (lenght);
	while (count < size - 1 && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (lenght);
}
/*
#include <stdio.h>
int main ()
{
	char *src = "In code we trust?";
	char dest[100];
	unsigned int size =2;

	printf("%s \n", src);
	printf("%d\n", ft_strlcpy(dest, src,size));
 	printf("%s", dest);
  
  return (0);
}*/
