#include "ngossip.h"
#include <math.h>

#ifdef __cplusplus
extern "C"
{
#endif

bool is_abundant(longnum num)
{
	return false;
}

bool is_amicable(longnum num)
{
	return false;
}

bool is_apocalyptic_power(longnum num)
{
	return false;
}

bool is_aspiring(longnum num)
{
	return false;
}

bool is_automorphic(longnum num)
{
	return false;
}

bool is_cake(longnum num)
{
	return false;
}

bool is_carmichael(longnum num)
{
	return false;
}

bool is_catalan(longnum num)
{
	return false;
}

bool is_composite(longnum num)
{
	return false;
}

bool is_compositorial(longnum num)
{
	return false;
}

bool is_cube(longnum num)
{
	return false;
}

bool is_deficient(longnum num)
{
	return false;
}

bool is_even(longnum num)
{
	return false;
}

bool is_evil(longnum num)
{
	return false;
}

bool is_factorial(longnum num)
{
	return false;
}

bool is_fibonacci(longnum num)
{
	return false;
}

bool is_google(longnum num)
{
	return false;
}

bool is_happy(longnum num)
{
	return false;
}

bool is_hungry(longnum num)
{
	return false;
}

bool is_lazy_caterer(longnum num)
{
	return false;
}

bool is_lucky(longnum num)
{
	return false;
}

bool is_mersenne(longnum num)
{
	return false;
}

bool is_mersenne_prime(longnum num)
{
	return false;
}

bool is_narcissistic(longnum num)
{
	return false;
}

bool is_odd(longnum num)
{
	return false;
}

bool is_odious(longnum num)
{
	return false;
}

bool is_palindrome(longnum num)
{
	return false;
}

bool is_palindromic_prime(longnum num)
{
	return false;
}

bool is_pentagonal(longnum num)
{
	return false;
}

bool is_perfect(longnum num)
{
	return false;
}

bool is_power_of_2(longnum num)
{
	return false;
}

bool is_powerful(longnum num)
{
	return false;
}

bool is_practical(longnum num)
{
	return false;
}

bool is_prime(longnum num)
{
	if ( num <= 1 ) return false;
	if ( num == 2 ) return true;
	if ( num % 2 == 0 ) return false;
	longnum square_root = sqrt(num);
	for (longnum i = 3; i <= square_root; i += 2 )
		if ( num % i == 0 )
			return false;

	return true;
}

bool is_primorial(longnum num)
{
	return false;
}

bool is_pronic(longnum num)
{
	return false;
}

bool is_repunit(longnum num)
{
	return false;
}

bool is_smith(longnum num)
{
	return false;
}

bool is_sociable(longnum num)
{
	return false;
}

bool is_square(longnum num)
{
	return false;
}

bool is_square_free(longnum num)
{
	return false;
}

bool is_tetrahedral(longnum num)
{
	return false;
}

bool is_triangular(longnum num)
{
	return false;
}

bool is_twin(longnum num)
{
	return false;
}

bool is_ulam(longnum num)
{
	return false;
}

bool is_undulating(longnum num)
{
	return false;
}

bool is_untouchable(longnum num)
{
	return false;
}

bool is_vampire(longnum num)
{
	return false;
}

bool is_weird(longnum num)
{
	return false;
}

#ifdef __cplusplus
}
#endif
