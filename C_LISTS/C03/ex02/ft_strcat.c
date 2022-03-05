/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:41:36 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/17 20:28:33 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*part_one;

	part_one = dest;
	while (*part_one != '\0')
	{
		part_one++;
	}
	while (*src != '\0')
	{
		*part_one = *src;
		part_one++;
		src++;
	}
	*part_one = '\0';
	return (dest);
}

#include <stdio.h>
char	*ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[20] = "Hello ";
    char src[20] = "aeHOOOOOOOOOOO";

    printf("%s\n", ft_strcat(dest, src));

    return 0;
}