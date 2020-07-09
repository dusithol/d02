
void	ft_putchar(char c);

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

