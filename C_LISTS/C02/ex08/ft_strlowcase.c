/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:02:07 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/15 00:13:41 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		cont;
	char	letter;

	cont = 0;
	while (str[cont] != '\0')
	{
		letter = str[cont];
		if (65 <= letter && letter <= 90)
		{
			str[cont] = str[cont] + 32;
		}
		cont++;
	}
	return (str);
}
