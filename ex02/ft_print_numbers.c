/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:48:51 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/13 11:48:55 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




void	ft_print_numbers(void)
{
	char	start;
	char	end;

	start = '0';
	end = '9';
	while (start <= end)
    {
		ft_putchar(start);
		start++;
	}
}


