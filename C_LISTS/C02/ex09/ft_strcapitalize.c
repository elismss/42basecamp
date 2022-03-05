/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:10:19 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/15 17:15:34 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (c == 0 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			c++;
		}
		else if (c > 0 && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		else if ((str[i] < 48) || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || (str[i] > 122))
				c = 0;
		else
			c++;
		i++;
	}
	return (str);
}
