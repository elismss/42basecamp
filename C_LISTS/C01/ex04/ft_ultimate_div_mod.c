/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:35:52 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/13 20:01:16 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
	{
	int	numb1;
	int	numb2;

	numb1 = *a;
	numb2 = *b;
	*a = numb1 / numb2;
	*b = numb1 % numb2;
}
