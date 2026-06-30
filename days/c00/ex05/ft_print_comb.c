#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);

}

void ft_print_numbers(char d1, char d2, char d3) {

	ft_putchar(d1);
	ft_putchar(d2);
	ft_putchar(d3);

	if(d1 < '8')
        {
		ft_putchar(',');
                ft_putchar(' ');
        }
}

void ft_print_comb(void) {
	char d1, d2, d3;

	d1 = '0';

	while ( d1 <= '7') {			
		d2 = d1 + 1;

		while ( d2 <= '8') {
			d3 = d2 + 1;

			while (d3 <= '9') {

				/* if(d1 < '8')
				{
					write(1, &d1 ,1);
					write(1, &d2 ,1);
					write(1, &d3 ,1);
					write(1, ", ", 2);
				}*/ 

				ft_print_numbers(d1, d2, d3);
				d3++; 
			}d2++;
		}d1++;
	} 
}

int main () {
	ft_print_comb();
	return 0;
}
