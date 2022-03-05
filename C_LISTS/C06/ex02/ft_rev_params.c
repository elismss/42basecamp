/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:17:38 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/18 22:20:49 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_rev_params(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont++;
	write(1, str, cont);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (--i > 0)
		ft_print_rev_params(argv[i]);
	return (0);
}
