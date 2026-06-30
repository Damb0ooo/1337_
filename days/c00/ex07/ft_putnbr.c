#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_putnbr(int nbr) {

	if (nbr == -2147483648 ) {
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);

	}


	if (nbr < 0 ) {
		ft_putchar('-');
		nbr = -nbr;

		ft_putnbr(nbr);
	}

       
	if (nbr >= 9) {
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else {
		ft_putchar(nbr + '0');
	}


}

int main () 
{
	ft_putnbr(-4343512);
	return 0;
}
