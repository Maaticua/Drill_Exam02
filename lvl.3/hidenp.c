/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <macaruan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:37:43 by macaruan          #+#    #+#             */
/*   Updated: 2025/05/13 15:46:33 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[1][i] != '\0' && av[2][j] != '\0')
		{
			if (av[2][j] == av[1][i])
			{
				i++;
			}
			else
				j++;
		}
		if (av[1][i] == '\0')
		{
			write(1, "1\n", 2);
			return (0);
		}
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
	}
	write(1, "\n", 1);
	return(0);
}
