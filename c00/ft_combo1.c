#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	print_number(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}


void	ft_razdelitel(void)
{
	ft_putchar(',');
	ft_putchar('\n');
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				if(a < b && b < c)
				{
					print_number(a, b, c);
					if(!(a == '7' && b == '8' && c == '9'))
						ft_razdelitel();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{	
	ft_print_comb();

	return (0);
}
