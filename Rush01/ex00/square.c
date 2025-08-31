/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripaparo <ripaparo@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 12:06:20 by ripaparo          #+#    #+#             */
/*   Updated: 2025/08/23 23:00:26 by angesoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_setting(char *str, char out_up[4], char out_down[4]) //ft_setting_1 ???
{
	out_up[0] = str[0];
	out_up[1] = str[2];
	out_up[2] = str[4];
	out_up[3] = str[6];
	out_down[0] = str[8];
	out_down[1] = str[10];
	out_down[2] = str[12];
	out_down[3] = str[14];
}

int	*ft_setting(char *str, char out_left[4], char out_right[4])//ft_ setting_2?
{
	out_left[0] = str[16];
	out_left[1] = str[18];
	out_left[2] = str[20];
	out_left[3] = str[22];
	out_right[0] = str[24];
	out_right[1] = str[26];
	out_right[2] = str[28];
	out_right[3] = str[30];
}

void	ft_square(char *str)
{
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];

	ft_setting_1(str, up, down); // ft_ setting_1 ???
	ft_setting_2(str, left, right); // ft_setting_2 ???
}
