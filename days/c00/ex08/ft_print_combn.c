#include <unistd.h>

void ft_putchar(char c ) 
{
	write(1, &c, 1);
} 

void ft_print_combn(int n) 
{ 

	while(n == 9) 
	{
		ft_putchar(n + '0');
		ft_putchar(',');
		n++;
	} 	
}

int main () 
{
	ft_print_combn(1);
	return 0;
}   
