/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:45:55 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/15 00:13:07 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		cont;
	char	letter;

	cont = 0;
	while (str[cont] != '\0')
	{
		letter = str[cont];
		if (65 <= letter && letter <= 90)
			cont++;
		else
			return (0);
	}
	return (1);
}
