#include <unistd.h>

void ft_print_comb2(void) {

	char k, r, a, l;

        k = '0';
	a = '0';
	l = '0';

        while(a <= '9' ) {

		// al = a*10 + l
		// kr = k*10 + l


		
		if (k > '9') {
			l++;
			k = '0';
		
		}


			
		if (l > '9') {
                       	a++;
                      	l = '0';
		}

		r = l + 1;
		while(r <= '9' ) {

			if( a <= '9' && l <= '8' && r <= '9' && k <= '9') {

			   	write(1 ,&a, 1);
			   	write(1 ,&l, 1);
			   	write(1 ," ", 1);

			 	write(1 ,&k, 1);
				write(1 ,&r, 1);
				write(1 ,", ", 2);
			}

			r++;
		}k++;
				
	} 

}

int main() {
	ft_print_comb2();
	return 0;
}


