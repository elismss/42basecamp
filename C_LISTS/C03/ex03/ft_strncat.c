/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:50:20 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/17 20:28:46 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*part_one;
	unsigned int	c;

	c = 0;
	part_one = dest;
	while (*part_one != '\0')
	{
		part_one++;
	}
	while (c < nb && *src != '\0')
	{
		*part_one = *src;
		part_one++;
		src++;
		c++;
	}
	*part_one = '\0';
	return (dest);
}

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[20] = "Hello ";
    char src[20] = "World";
    unsigned int i = 3;

    printf("%s\n", ft_strncat(dest, src, i));

    return 0;
}
