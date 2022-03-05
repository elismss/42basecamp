/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:09:59 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/06 20:58:22 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('/');
	else if (column == column_max)
		ft_putchar ('\\');
	else
		ft_putchar ('*');
}

void	bottom(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('\\');
	else if (column == column_max)
		ft_putchar ('/');
	else
		ft_putchar ('*');
}

void	middle(int column, int column_max)
{
	if (column == 0)
		ft_putchar ('*');
	else if (column == column_max)
		ft_putchar ('*');
	else
		ft_putchar (' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (y >= 1 && x >= 1)
	{
		i = 0;
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				if (i == 0)
					top(j, x - 1);
				else if (i == y - 1)
					bottom(j, x - 1);
				else
					middle(j, x - 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Valores inválidos para x e y\n", 30);
}
