/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:42:49 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/13 11:43:03 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (start <= end) {
		ft_putchar(start);
		start++;
	}
}

