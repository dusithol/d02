/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:42:26 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/13 11:42:31 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_print_reverse_alphabet(void)
{
	char	start;
	char	end;

	start = 'z';
	end = 'a';
	while (start >= end)
   	{
		ft_putchar(start);
		start--;
	}
}


