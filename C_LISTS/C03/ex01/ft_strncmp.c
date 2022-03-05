/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:10:50 by emodesto          #+#    #+#             */
/*   Updated: 2022/02/17 20:28:21 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (c < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((int)(unsigned char)s1[i] - (int)(unsigned char)s2[i]);
		i++;
		c++;
	}
	return (0);
}

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char a[] = "abc";
    char b[] = "abc";
    unsigned int i = 5;

    printf("%d\n", ft_strncmp(a, b, i));

    return 0;
}
