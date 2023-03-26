/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:58:28 by djin              #+#    #+#             */
/*   Updated: 2023/03/26 14:50:07 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y, int i, int j)
{
	i = 1;
	j = 1;
	while (i <= y)
	{	
		j = 1;
		while (j <= x)
		{					
			if (i == 1 || j == 1 || i == y || j == x)
			{
				if ((i == 1 || i == y) && (j == 1 || j == x))
					ft_putchar(111);
				else if ((i > 1 || i < y) && (j == 1 || j == x))
					ft_putchar(124);
				else
					ft_putchar(45);
			}
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
