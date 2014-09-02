#include "ngossip.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes or function signatures
int print_help();
int print_version();
bool is_integer(const char* text);
int print_properties(const char* num);
void print_prime_factors(longnum num);


int main(int argc, char* argv[])
{
	for ( int i = 1; i < argc; ++i )
		if ( strcmp( argv[i], "--help" ) == 0 )
			return print_help();

	for ( int i = 1; i < argc; ++i )
		if ( strcmp( argv[i], "--version" ) == 0 )
			return print_version();

	for ( int i = 1; i < argc; ++i )
	{
		if ( is_integer(argv[i]) )
			print_properties(argv[i]);
	}

	return 0;
}

int print_help()
{
	printf("%s",
		   "Usage: ngossip [-iltV] [NUMBERS] [PROPERTIES] [-i FILE]\n"
		   "Number Gossip: Show properties of positive integer NUMBERS. Options:\n"

		   "  -i FILE          Read numbers from FILE\n"
		   "  -l, --list       List all available properties\n"
		   "  -t, --transpose  For each PROPERTIES show applying numbers\n"
		   "  -v, --verbose    Show a short description of each property\n"
		   "      --version    Print version of this program\n"

		   "If not parameters are given, read numbers from standard input until EOF\n"
		   "NUMBERS can have ranges in form n1:n2, e.g: 80:120\n");

	return 0;
}

int print_version()
{
	printf("%s",
		"ngossip v1.0 [2014-Set-02] Jeisson Hidalgo-Céspedes <jeissonh@gmail.com>\n"
		"\n"
		"This is free software distributed under Creative Commons Attribution 4.0\n"
		"International (CC BY 4.0) license.\n");

	return 0;
}

bool is_integer(const char text[])
{
	if ( text[0] == '\0') return false;

	for ( int i = 0; text[i] != '\0'; ++i )
		if ( text[i] < '0' || text[i] > '9' )
			return false;

	return true;
}

int print_properties(const char* text)
{
	longnum num = strtoull(text, NULL, 10);
	if ( num == 0 ) return 1;

	printf("%llu:\nprime factors: ", num);
	print_prime_factors(num);
	printf("\n");

	if ( is_abundant(num) ) printf(" abundant");
	if ( is_amicable(num) ) printf(" amicable");
	if ( is_apocalyptic_power(num) ) printf(" apocalyptic_power");
	if ( is_aspiring(num) ) printf(" aspiring");
	if ( is_automorphic(num) ) printf(" automorphic");
	if ( is_cake(num) ) printf(" cake");
	if ( is_carmichael(num) ) printf(" carmichael");
	if ( is_catalan(num) ) printf(" catalan");
	if ( is_composite(num) ) printf(" composite");
	if ( is_compositorial(num) ) printf(" compositorial");
	if ( is_cube(num) ) printf(" cube");
	if ( is_deficient(num) ) printf(" deficient");
	if ( is_easy_to_remember(num) ) printf(" easy_to_remember");
	if ( is_ecci1(num) ) printf(" ecci1");
	if ( is_ecci2(num) ) printf(" ecci2");
	if ( is_even(num) ) printf(" even");
	if ( is_evil(num) ) printf(" evil");
	if ( is_factorial(num) ) printf(" factorial");
	if ( is_fermat(num) ) printf(" fermat");
	if ( is_fibonacci(num) ) printf(" fibonacci");
	if ( is_google(num) ) printf(" google");
	if ( is_happy(num) ) printf(" happy");
	if ( is_hungry(num) ) printf(" hungry");
	if ( is_hypotenuse(num) ) printf(" hypotenuse");
	if ( is_lazy_caterer(num) ) printf(" lazy_caterer");
	if ( is_lucky(num) ) printf(" lucky");
	if ( is_mersenne_prime(num) ) printf(" mersenne_prime");
	if ( is_mersenne(num) ) printf(" mersenne");
	if ( is_narcissistic(num) ) printf(" narcissistic");
	if ( is_odd(num) ) printf(" odd");
	if ( is_odious(num) ) printf(" odious");
	if ( is_palindrome(num) ) printf(" palindrome");
	if ( is_palindromic_prime(num) ) printf(" palindromic_prime");
	if ( is_parasite(num) ) printf(" parasite");
	if ( is_pentagonal(num) ) printf(" pentagonal");
	if ( is_perfect(num) ) printf(" perfect");
	if ( is_persistent(num) ) printf(" persistent");
	if ( is_power_of_2(num) ) printf(" power_of_2");
	if ( is_powerful(num) ) printf(" powerful");
	if ( is_practical(num) ) printf(" practical");
	if ( is_prime(num) ) printf(" prime");
	if ( is_primorial(num) ) printf(" primorial");
	if ( is_product_perfect(num) ) printf(" product_perfect");
	if ( is_pronic(num) ) printf(" pronic");
	if ( is_repdigit(num) ) printf(" repdigit");
	if ( is_repunit(num) ) printf(" repunit");
	if ( is_smith(num) ) printf(" smith");
	if ( is_sociable(num) ) printf(" sociable");
	if ( is_square_free(num) ) printf(" square_free");
	if ( is_square(num) ) printf(" square");
	if ( is_tetrahedral(num) ) printf(" tetrahedral");
	if ( is_triangular(num) ) printf(" triangular");
	if ( is_twin(num) ) printf(" twin");
	if ( is_ulam(num) ) printf(" ulam");
	if ( is_undulating(num) ) printf(" undulating");
	if ( is_untouchable(num) ) printf(" untouchable");
	if ( is_vampire(num) ) printf(" vampire");
	if ( is_weird(num) ) printf(" weird");

	printf("\n\n");
	return 0;
}


void print_prime_factors(longnum num)
{
	for (longnum prime = 2; num > 1; ++prime )
	{
		longnum times = 0;
		for ( ; num % prime == 0; ++times )
			num /= prime;
		if ( times > 0 )
		{
			printf("%llu", prime);
			if ( times > 1 )
				printf("^%llu", times);
			printf(" ");
		}
	}
}

