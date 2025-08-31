/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angesoto <angesoto@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:20:59 by angesoto          #+#    #+#             */
/*   Updated: 2025/08/31 11:41:13 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	i = 0;
	dest_len = strlen(dest); //error de declaracion de libreria!!
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return dest;
}

#include <stdio.h>
int main()
{
    char dest[100] = "In code we trust.";
    char src[] = "Do we?";
	unsigned int nb = 5,  
  ft_strcat(dest, src, nb);
	printf("%s", dest);	
    return (0);
}


