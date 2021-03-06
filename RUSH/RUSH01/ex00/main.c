/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emodesto <emodesto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:08:10 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/02/14 15:19:10 by emodesto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_observers(char *pack, int *cut);
void	fill_observers(char t[6][6], int *o);
void	ft_printarray(char t[6][6]);
void	print_error(void);
void	insert_spaces(char tab[6][6]);
int		check_columns(int *o);
int		check_lines(int *o);

int	main(int argc, char *argv[])
{
	int		observers[16];
	char	tab[6][6];
	int		error;

	if (argc == 2) // quantidade certa 
	{
		insert_spaces(tab);
		error = get_observers(argv[1], observers);
		error = error + check_columns (observers);
		error = error + check_lines (observers);
		if (error == 0)
		{
			fill_observers (tab, observers);
			ft_printarray(tab);
		}
		else
			print_error();
	}
	else
		print_error();
}
