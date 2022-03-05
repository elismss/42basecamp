/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:53:49 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/15 16:59:11 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		cont;
	char	letter;

	cont = 0;
	while (str[cont] != '\0')
	{
		letter = str[cont];
		if (32 <= letter && letter <= 126)
			cont++;
		else
			return (0);
	}
	return (1);
}
