/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:54:09 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/13 15:54:13 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}


void	ft_print_comb2(void)
{
	char d;
	char e;

	d = '0';
		while(d <='99')
		{
			e = d + 1;
			while(e <='99')
			{
				ft_putchar(d);
				ft_putchar(e);
				ft_putchar(' ');

			}
				d++;
}
}


