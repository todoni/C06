/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:11:32 by sohan             #+#    #+#             */
/*   Updated: 2021/04/07 23:06:42 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_arguments(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		compare_arguments(char *arg1, char *arg2)
{
	int result;

	result = 0;
	while (*arg1 == *arg2 && *arg1 != '\0')
	{
		arg1++;
		arg2++;
	}
	result = *arg1 - *arg2;
	return (result);
}

void	swap_arguments(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc != 1)
	{
		while (i < argc - 1)
		{
			if (compare_arguments(argv[i], argv[i + 1]) > 0)
				swap_arguments(argv + i, argv + i + 1);
			i++;
		}
		argc--;
		i = 1;
	}
	i = 1;
	while (argv[i] != 0)
	{
		display_arguments(argv[i]);
		i++;
	}
	return (0);
}
