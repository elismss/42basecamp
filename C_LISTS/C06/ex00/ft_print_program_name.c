/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:17:41 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/18 22:19:04 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
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
	if (argc > 0)
		ft_print_program_name(argv[0]);
	return (0);
}
