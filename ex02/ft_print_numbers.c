
void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void) {
	char	start;
	char	end;

	start = '0';
	end = '9';
	while (start <= end) {
		ft_putchar(start);
		start++;
	}
}
