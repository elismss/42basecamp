/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:18:20 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/14 23:26:43 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		cont;
	char	letter;

	cont = 0;
	while (str[cont] != '\0')
	{
		letter = str[cont];
		if ((65 <= letter && letter <= 90) || (97 <= letter && letter <= 122))
			cont++;
		else
			return (0);
	}
	return (1);
}
