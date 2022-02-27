#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers()
{
	char s = '0';
	while ( s <= '9')
	{
		ft_putchar(s);
		s++;
	}
}

int main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return(0);
}
