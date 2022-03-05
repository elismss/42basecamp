/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:30:08 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/14 23:32:16 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		cont;
	char	numb;

	cont = 0;
	while (str[cont] != '\0')
	{
		numb = str[cont];
		if (48 <= numb && numb <= 57)
			cont++;
		else
			return (0);
	}
	return (1);
}
