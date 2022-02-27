#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet1(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

void ft_print_alphabet2(void)
{
	int i;
	char letter;

	i = 97;
	while (i <= 122)
	{
		letter = i;
		ft_putchar(letter);
		i++;
	}
}

int main(void)
{
	ft_print_alphabet1();
	ft_putchar('\n');
	ft_print_alphabet2();

	return(0);
}
