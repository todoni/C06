/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:52:02 by sohan             #+#    #+#             */
/*   Updated: 2021/04/07 23:06:07 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_arguments(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int num_argc;
	int i;

	num_argc = argc;
	i = 1;
	while (i < argc)
	{
		display_arguments(argv[i]);
		i++;
	}
	return (0);
}
