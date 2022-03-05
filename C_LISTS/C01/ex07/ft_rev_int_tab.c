/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:16:44 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/13 20:22:03 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont_first;
	int	cont_last;
	int	value_first;
	int	value_last;

	cont_first = 0;
	cont_last = size - 1;
	while (cont_first < cont_last)
	{
		value_first = tab[cont_first];
		value_last = tab[cont_last];
		tab[cont_first] = value_last;
		tab[cont_last] = value_first;
		cont_first++;
		cont_last--;
	}
}
