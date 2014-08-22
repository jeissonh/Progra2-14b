// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "ngossip.h"

TEST_CASE("abundant")
{
	REQUIRE( is_abundant(0) == false );
	REQUIRE( is_abundant(1) == false );
	REQUIRE( is_abundant(2) == false );
	REQUIRE( is_abundant(3) == false );
	REQUIRE( is_abundant(11) == false );
	REQUIRE( is_abundant(12) );
	REQUIRE( is_abundant(13) == false );
	REQUIRE( is_abundant(18) );
	REQUIRE( is_abundant(20) );
	REQUIRE( is_abundant(24) );
	REQUIRE( is_abundant(30) );
	REQUIRE( is_abundant(36) );
	REQUIRE( is_abundant(40) );
	REQUIRE( is_abundant(42) );
	REQUIRE( is_abundant(48) );
	REQUIRE( is_abundant(50) == false );
	REQUIRE( is_abundant(54) );
	REQUIRE( is_abundant(1001) == false );
}

TEST_CASE("amicable")
{
	REQUIRE( is_amicable(0) == false );
	REQUIRE( is_amicable(1) == false );
	REQUIRE( is_amicable(2) == false );
	REQUIRE( is_amicable(10) == false );
	REQUIRE( is_amicable(100) == false );
	REQUIRE( is_amicable(220) );
	REQUIRE( is_amicable(284) );
	REQUIRE( is_amicable(1184) );
	REQUIRE( is_amicable(1024) == false );
	REQUIRE( is_amicable(1210) );
	REQUIRE( is_amicable(2620) );
	REQUIRE( is_amicable(2924) );
	REQUIRE( is_amicable(5000) == false );
	REQUIRE( is_amicable(5020) );
	REQUIRE( is_amicable(5564) );
	REQUIRE( is_amicable(6232) );
	REQUIRE( is_amicable(6368) );
}

TEST_CASE("apocalyptic_power")
{
	REQUIRE( is_apocalyptic_power(0) == false );
	REQUIRE( is_apocalyptic_power(1) == false );
	REQUIRE( is_apocalyptic_power(2) == false );
	REQUIRE( is_apocalyptic_power(5) == false );
	REQUIRE( is_apocalyptic_power(100) == false );
	REQUIRE( is_apocalyptic_power(157) );
	REQUIRE( is_apocalyptic_power(192) );
	REQUIRE( is_apocalyptic_power(213) == false );
	REQUIRE( is_apocalyptic_power(218) );
	REQUIRE( is_apocalyptic_power(220) );
	REQUIRE( is_apocalyptic_power(222) );
	REQUIRE( is_apocalyptic_power(224) );
	REQUIRE( is_apocalyptic_power(226) );
	REQUIRE( is_apocalyptic_power(243) );
	REQUIRE( is_apocalyptic_power(244) == false );
	REQUIRE( is_apocalyptic_power(245) );
	REQUIRE( is_apocalyptic_power(247) );
}

TEST_CASE("aspiring")
{
	REQUIRE( is_aspiring(0) == false );
	REQUIRE( is_aspiring(25) );
	REQUIRE( is_aspiring(95) );
	REQUIRE( is_aspiring(119) );
	REQUIRE( is_aspiring(143) );
	REQUIRE( is_aspiring(417) );
	REQUIRE( is_aspiring(445) );
	REQUIRE( is_aspiring(565) );
	REQUIRE( is_aspiring(608) );
	REQUIRE( is_aspiring(650) );
	REQUIRE( is_aspiring(652) );
}

TEST_CASE("automorphic")
{
	REQUIRE( is_automorphic(0) == false );
	REQUIRE( is_automorphic(1) );
	REQUIRE( is_automorphic(5) );
	REQUIRE( is_automorphic(6) );
	REQUIRE( is_automorphic(25) );
	REQUIRE( is_automorphic(76) );
	REQUIRE( is_automorphic(376) );
	REQUIRE( is_automorphic(625) );
	REQUIRE( is_automorphic(9376) );
	REQUIRE( is_automorphic(90625) );
	REQUIRE( is_automorphic(109376) );

}

TEST_CASE("cake")
{
	REQUIRE( is_cake(0) == false );
	REQUIRE( is_cake(2) );
	REQUIRE( is_cake(4) );
	REQUIRE( is_cake(8) );
	REQUIRE( is_cake(15) );
	REQUIRE( is_cake(26) );
	REQUIRE( is_cake(42) );
	REQUIRE( is_cake(64) );
	REQUIRE( is_cake(93) );
	REQUIRE( is_cake(130) );
	REQUIRE( is_cake(176) );
}

TEST_CASE("carmichael")
{
	REQUIRE( is_carmichael(0) == false );
	REQUIRE( is_carmichael(561) );
	REQUIRE( is_carmichael(1105) );
	REQUIRE( is_carmichael(1729) );
	REQUIRE( is_carmichael(2465) );
	REQUIRE( is_carmichael(2821) );
	REQUIRE( is_carmichael(6601) );
	REQUIRE( is_carmichael(8911) );
	REQUIRE( is_carmichael(10585) );
	REQUIRE( is_carmichael(15841) );
	REQUIRE( is_carmichael(29341) );
}

TEST_CASE("catalan")
{
	REQUIRE( is_catalan(0) == false );
	REQUIRE( is_catalan(1) );
	REQUIRE( is_catalan(2) );
	REQUIRE( is_catalan(5) );
	REQUIRE( is_catalan(14) );
	REQUIRE( is_catalan(42) );
	REQUIRE( is_catalan(132) );
	REQUIRE( is_catalan(429) );
	REQUIRE( is_catalan(1430) );
	REQUIRE( is_catalan(4862) );
	REQUIRE( is_catalan(16796) );
}

TEST_CASE("composite")
{
	REQUIRE( is_composite(0) == false );
	REQUIRE( is_composite(4) );
	REQUIRE( is_composite(6) );
	REQUIRE( is_composite(8) );
	REQUIRE( is_composite(9) );
	REQUIRE( is_composite(10) );
	REQUIRE( is_composite(12) );
	REQUIRE( is_composite(14) );
	REQUIRE( is_composite(15) );
	REQUIRE( is_composite(16) );
	REQUIRE( is_composite(18) );
	REQUIRE( is_composite(1001) );
}

TEST_CASE("compositorial")
{
	REQUIRE( is_compositorial(0) == false );
	REQUIRE( is_compositorial(4) );
	REQUIRE( is_compositorial(24) );
	REQUIRE( is_compositorial(192) );
	REQUIRE( is_compositorial(1728) );
	REQUIRE( is_compositorial(17280) );
	REQUIRE( is_compositorial(207360) );
	REQUIRE( is_compositorial(2903040) );
	REQUIRE( is_compositorial(43545600) );
	REQUIRE( is_compositorial(696729600) );
	REQUIRE( is_compositorial(12541132800) );
}

TEST_CASE("cube")
{
	REQUIRE( is_cube(0) == false );
	REQUIRE( is_cube(1) );
	REQUIRE( is_cube(8) );
	REQUIRE( is_cube(27) );
	REQUIRE( is_cube(64) );
	REQUIRE( is_cube(125) );
	REQUIRE( is_cube(216) );
	REQUIRE( is_cube(343) );
	REQUIRE( is_cube(512) );
	REQUIRE( is_cube(729) );
	REQUIRE( is_cube(1000) );
}

TEST_CASE("deficient")
{
	REQUIRE( is_deficient(0) == false );
	REQUIRE( is_deficient(1) );
	REQUIRE( is_deficient(2) );
	REQUIRE( is_deficient(3) );
	REQUIRE( is_deficient(4) );
	REQUIRE( is_deficient(5) );
	REQUIRE( is_deficient(7) );
	REQUIRE( is_deficient(8) );
	REQUIRE( is_deficient(9) );
	REQUIRE( is_deficient(10) );
	REQUIRE( is_deficient(11) );
}

TEST_CASE("even")
{
	REQUIRE( is_even(0) == false );
	REQUIRE( is_even(2) );
	REQUIRE( is_even(4) );
	REQUIRE( is_even(6) );
	REQUIRE( is_even(8) );
	REQUIRE( is_even(10) );
	REQUIRE( is_even(12) );
	REQUIRE( is_even(14) );
	REQUIRE( is_even(16) );
	REQUIRE( is_even(18) );
	REQUIRE( is_even(20) );
}

TEST_CASE("evil")
{
	REQUIRE( is_evil(0) == false );
	REQUIRE( is_evil(3) );
	REQUIRE( is_evil(5) );
	REQUIRE( is_evil(6) );
	REQUIRE( is_evil(9) );
	REQUIRE( is_evil(10) );
	REQUIRE( is_evil(12) );
	REQUIRE( is_evil(15) );
	REQUIRE( is_evil(17) );
	REQUIRE( is_evil(18) );
	REQUIRE( is_evil(20) );
}

TEST_CASE("factorial")
{
	REQUIRE( is_factorial(0) == false );
	REQUIRE( is_factorial(1) );
	REQUIRE( is_factorial(2) );
	REQUIRE( is_factorial(6) );
	REQUIRE( is_factorial(24) );
	REQUIRE( is_factorial(120) );
	REQUIRE( is_factorial(720) );
	REQUIRE( is_factorial(5040) );
	REQUIRE( is_factorial(40320) );
	REQUIRE( is_factorial(362880) );
	REQUIRE( is_factorial(3628800) );
}

TEST_CASE("fibonacci")
{
	REQUIRE( is_fibonacci(0) == false );
	REQUIRE( is_fibonacci(1) );
	REQUIRE( is_fibonacci(1) );
	REQUIRE( is_fibonacci(2) );
	REQUIRE( is_fibonacci(3) );
	REQUIRE( is_fibonacci(5) );
	REQUIRE( is_fibonacci(8) );
	REQUIRE( is_fibonacci(13) );
	REQUIRE( is_fibonacci(21) );
	REQUIRE( is_fibonacci(34) );
	REQUIRE( is_fibonacci(55) );
}

TEST_CASE("google")
{
	REQUIRE( is_google(0) == false );
	REQUIRE( is_google(2) );
	REQUIRE( is_google(71) );
	REQUIRE( is_google(271) );
	REQUIRE( is_google(4523) );
	REQUIRE( is_google(74713) );
	REQUIRE( is_google(904523) );
	REQUIRE( is_google(2718281) );
	REQUIRE( is_google(72407663) );
	REQUIRE( is_google(360287471) );
	REQUIRE( is_google(7427466391) );
}

TEST_CASE("happy")
{
	REQUIRE( is_happy(0) == false );
	REQUIRE( is_happy(1) );
	REQUIRE( is_happy(7) );
	REQUIRE( is_happy(10) );
	REQUIRE( is_happy(13) );
	REQUIRE( is_happy(19) );
	REQUIRE( is_happy(23) );
	REQUIRE( is_happy(28) );
	REQUIRE( is_happy(31) );
	REQUIRE( is_happy(32) );
	REQUIRE( is_happy(44) );
}

TEST_CASE("hungry")
{
	REQUIRE( is_hungry(0) == false );
	REQUIRE( is_hungry(5) );
	REQUIRE( is_hungry(17) );
	REQUIRE( is_hungry(74) );
	REQUIRE( is_hungry(144) );
	REQUIRE( is_hungry(144) );
	REQUIRE( is_hungry(2003) );
	REQUIRE( is_hungry(2003) );
	REQUIRE( is_hungry(37929) );
	REQUIRE( is_hungry(82810) );
	REQUIRE( is_hungry(161449) );
}

TEST_CASE("lazy_caterer")
{
	REQUIRE( is_lazy_caterer(0) == false );
	REQUIRE( is_lazy_caterer(2) );
	REQUIRE( is_lazy_caterer(4) );
	REQUIRE( is_lazy_caterer(7) );
	REQUIRE( is_lazy_caterer(11) );
	REQUIRE( is_lazy_caterer(16) );
	REQUIRE( is_lazy_caterer(22) );
	REQUIRE( is_lazy_caterer(29) );
	REQUIRE( is_lazy_caterer(37) );
	REQUIRE( is_lazy_caterer(46) );
	REQUIRE( is_lazy_caterer(56) );
}

TEST_CASE("lucky")
{
	REQUIRE( is_lucky(0) == false );
	REQUIRE( is_lucky(1) );
	REQUIRE( is_lucky(3) );
	REQUIRE( is_lucky(7) );
	REQUIRE( is_lucky(9) );
	REQUIRE( is_lucky(13) );
	REQUIRE( is_lucky(15) );
	REQUIRE( is_lucky(21) );
	REQUIRE( is_lucky(25) );
	REQUIRE( is_lucky(31) );
	REQUIRE( is_lucky(33) );
}

TEST_CASE("mersenne")
{
	REQUIRE( is_mersenne(0) == false );
	REQUIRE( is_mersenne(3) );
	REQUIRE( is_mersenne(7) );
	REQUIRE( is_mersenne(31) );
	REQUIRE( is_mersenne(127) );
	REQUIRE( is_mersenne(2047) );
	REQUIRE( is_mersenne(8191) );
	REQUIRE( is_mersenne(131071) );
	REQUIRE( is_mersenne(524287) );
	REQUIRE( is_mersenne(8388607) );
	REQUIRE( is_mersenne(536870911) );
}

TEST_CASE("mersenne_prime")
{
	REQUIRE( is_mersenne_prime(0) == false );
	REQUIRE( is_mersenne_prime(3) );
	REQUIRE( is_mersenne_prime(7) );
	REQUIRE( is_mersenne_prime(31) );
	REQUIRE( is_mersenne_prime(127) );
	REQUIRE( is_mersenne_prime(8191) );
	REQUIRE( is_mersenne_prime(131071) );
	REQUIRE( is_mersenne_prime(524287) );
	REQUIRE( is_mersenne_prime(2147483647) );
	REQUIRE( is_mersenne_prime(2305843009213693951llu) );
//	REQUIRE( is_mersenne_prime(618970019642690137449562111llu) );
}

TEST_CASE("narcissistic")
{
	REQUIRE( is_narcissistic(0) == false );
	REQUIRE( is_narcissistic(1) );
	REQUIRE( is_narcissistic(2) );
	REQUIRE( is_narcissistic(3) );
	REQUIRE( is_narcissistic(4) );
	REQUIRE( is_narcissistic(5) );
	REQUIRE( is_narcissistic(6) );
	REQUIRE( is_narcissistic(7) );
	REQUIRE( is_narcissistic(8) );
	REQUIRE( is_narcissistic(9) );
	REQUIRE( is_narcissistic(153) );
}

TEST_CASE("odd")
{
	REQUIRE( is_odd(0) == false );
	REQUIRE( is_odd(1) );
	REQUIRE( is_odd(3) );
	REQUIRE( is_odd(5) );
	REQUIRE( is_odd(7) );
	REQUIRE( is_odd(9) );
	REQUIRE( is_odd(11) );
	REQUIRE( is_odd(13) );
	REQUIRE( is_odd(15) );
	REQUIRE( is_odd(17) );
	REQUIRE( is_odd(19) );
}

TEST_CASE("odious")
{
	REQUIRE( is_odious(0) == false );
	REQUIRE( is_odious(1) );
	REQUIRE( is_odious(2) );
	REQUIRE( is_odious(4) );
	REQUIRE( is_odious(7) );
	REQUIRE( is_odious(8) );
	REQUIRE( is_odious(11) );
	REQUIRE( is_odious(13) );
	REQUIRE( is_odious(14) );
	REQUIRE( is_odious(16) );
	REQUIRE( is_odious(19) );
}

TEST_CASE("palindrome")
{
	REQUIRE( is_palindrome(0) == false );
	REQUIRE( is_palindrome(1) );
	REQUIRE( is_palindrome(2) );
	REQUIRE( is_palindrome(3) );
	REQUIRE( is_palindrome(4) );
	REQUIRE( is_palindrome(5) );
	REQUIRE( is_palindrome(6) );
	REQUIRE( is_palindrome(7) );
	REQUIRE( is_palindrome(8) );
	REQUIRE( is_palindrome(9) );
	REQUIRE( is_palindrome(11) );
	REQUIRE( is_palindrome(101) );
	REQUIRE( is_palindrome(121) );
	REQUIRE( is_palindrome(7887) );
	REQUIRE( is_palindrome(45054) );
}

TEST_CASE("palindromic_prime")
{
	REQUIRE( is_palindromic_prime(0) == false );
	REQUIRE( is_palindromic_prime(2) );
	REQUIRE( is_palindromic_prime(3) );
	REQUIRE( is_palindromic_prime(5) );
	REQUIRE( is_palindromic_prime(7) );
	REQUIRE( is_palindromic_prime(11) );
	REQUIRE( is_palindromic_prime(101) );
	REQUIRE( is_palindromic_prime(131) );
	REQUIRE( is_palindromic_prime(151) );
	REQUIRE( is_palindromic_prime(181) );
	REQUIRE( is_palindromic_prime(191) );
}

TEST_CASE("pentagonal")
{
	REQUIRE( is_pentagonal(0) == false );
	REQUIRE( is_pentagonal(1) );
	REQUIRE( is_pentagonal(5) );
	REQUIRE( is_pentagonal(12) );
	REQUIRE( is_pentagonal(22) );
	REQUIRE( is_pentagonal(35) );
	REQUIRE( is_pentagonal(51) );
	REQUIRE( is_pentagonal(70) );
	REQUIRE( is_pentagonal(92) );
	REQUIRE( is_pentagonal(117) );
	REQUIRE( is_pentagonal(145) );
}

TEST_CASE("perfect")
{
	REQUIRE( is_perfect(0) == false );
	REQUIRE( is_perfect(6) );
	REQUIRE( is_perfect(28) );
	REQUIRE( is_perfect(496) );
	REQUIRE( is_perfect(8128) );
	REQUIRE( is_perfect(33550336) );
	REQUIRE( is_perfect(8589869056llu) );
	REQUIRE( is_perfect(137438691328llu) );
	REQUIRE( is_perfect(2305843008139952128llu) );
//	REQUIRE( is_perfect(2658455991569831744654692615953842176llu) );
//	REQUIRE( is_perfect(191561942608236107294793378084303638130997321548169216llu) );
}

TEST_CASE("power_of_2")
{
	REQUIRE( is_power_of_2(0) == false );
	REQUIRE( is_power_of_2(1) );
	REQUIRE( is_power_of_2(2) );
	REQUIRE( is_power_of_2(4) );
	REQUIRE( is_power_of_2(8) );
	REQUIRE( is_power_of_2(16) );
	REQUIRE( is_power_of_2(32) );
	REQUIRE( is_power_of_2(64) );
	REQUIRE( is_power_of_2(128) );
	REQUIRE( is_power_of_2(256) );
	REQUIRE( is_power_of_2(512) );
}

TEST_CASE("powerful")
{
	REQUIRE( is_powerful(0) == false );
	REQUIRE( is_powerful(1) );
	REQUIRE( is_powerful(4) );
	REQUIRE( is_powerful(8) );
	REQUIRE( is_powerful(9) );
	REQUIRE( is_powerful(16) );
	REQUIRE( is_powerful(25) );
	REQUIRE( is_powerful(27) );
	REQUIRE( is_powerful(32) );
	REQUIRE( is_powerful(36) );
	REQUIRE( is_powerful(49) );
}

TEST_CASE("practical")
{
	REQUIRE( is_practical(0) == false );
	REQUIRE( is_practical(1) );
	REQUIRE( is_practical(2) );
	REQUIRE( is_practical(4) );
	REQUIRE( is_practical(6) );
	REQUIRE( is_practical(8) );
	REQUIRE( is_practical(12) );
	REQUIRE( is_practical(16) );
	REQUIRE( is_practical(18) );
	REQUIRE( is_practical(20) );
	REQUIRE( is_practical(24) );
}

TEST_CASE("prime")
{
	REQUIRE( is_prime(0) == false );
	REQUIRE( is_prime(1) == false );
	REQUIRE( is_prime(2) );
	REQUIRE( is_prime(3) );
	REQUIRE( is_prime(4) == false );
	REQUIRE( is_prime(5) );
	REQUIRE( is_prime(7) );
	REQUIRE( is_prime(9) == false );
	REQUIRE( is_prime(11) );
	REQUIRE( is_prime(13) );
	REQUIRE( is_prime(17) );
	REQUIRE( is_prime(19) );
	REQUIRE( is_prime(23) );
	REQUIRE( is_prime(29) );
	REQUIRE( is_prime(100000000000001llu) == false );
}

TEST_CASE("primorial")
{
	REQUIRE( is_primorial(0) == false );
	REQUIRE( is_primorial(2) );
	REQUIRE( is_primorial(6) );
	REQUIRE( is_primorial(30) );
	REQUIRE( is_primorial(210) );
	REQUIRE( is_primorial(2310) );
	REQUIRE( is_primorial(30030) );
	REQUIRE( is_primorial(510510llu) );
	REQUIRE( is_primorial(9699690llu) );
	REQUIRE( is_primorial(223092870llu) );
	REQUIRE( is_primorial(6469693230llu) );
}

TEST_CASE("pronic")
{
	REQUIRE( is_pronic(0) == false );
	REQUIRE( is_pronic(2) );
	REQUIRE( is_pronic(6) );
	REQUIRE( is_pronic(12) );
	REQUIRE( is_pronic(20) );
	REQUIRE( is_pronic(30) );
	REQUIRE( is_pronic(42) );
	REQUIRE( is_pronic(56) );
	REQUIRE( is_pronic(72) );
	REQUIRE( is_pronic(90) );
	REQUIRE( is_pronic(110) );
}

TEST_CASE("repunit")
{
	REQUIRE( is_repunit(0) == false );
	REQUIRE( is_repunit(1) );
	REQUIRE( is_repunit(11) );
	REQUIRE( is_repunit(111) );
	REQUIRE( is_repunit(1111) );
	REQUIRE( is_repunit(11111) );
	REQUIRE( is_repunit(111111) );
	REQUIRE( is_repunit(1111111) );
	REQUIRE( is_repunit(11111111) );
	REQUIRE( is_repunit(111111111) );
	REQUIRE( is_repunit(1111111111) );
}

TEST_CASE("smith")
{
	REQUIRE( is_smith(0) == false );
	REQUIRE( is_smith(4) );
	REQUIRE( is_smith(22) );
	REQUIRE( is_smith(27) );
	REQUIRE( is_smith(58) );
	REQUIRE( is_smith(85) );
	REQUIRE( is_smith(94) );
	REQUIRE( is_smith(121) );
	REQUIRE( is_smith(166) );
	REQUIRE( is_smith(202) );
	REQUIRE( is_smith(265) );
}

TEST_CASE("sociable")
{
	REQUIRE( is_sociable(0) == false );
	REQUIRE( is_sociable(12496) );
	REQUIRE( is_sociable(14264) );
	REQUIRE( is_sociable(14288) );
	REQUIRE( is_sociable(14316) );
	REQUIRE( is_sociable(14536) );
	REQUIRE( is_sociable(15472) );
	REQUIRE( is_sociable(17716) );
	REQUIRE( is_sociable(19116) );
	REQUIRE( is_sociable(19916) );
	REQUIRE( is_sociable(22744) );
}

TEST_CASE("square")
{
	REQUIRE( is_square(0) == false );
	REQUIRE( is_square(1) );
	REQUIRE( is_square(4) );
	REQUIRE( is_square(9) );
	REQUIRE( is_square(16) );
	REQUIRE( is_square(25) );
	REQUIRE( is_square(36) );
	REQUIRE( is_square(49) );
	REQUIRE( is_square(64) );
	REQUIRE( is_square(81) );
	REQUIRE( is_square(100) );
}

TEST_CASE("square_free")
{
	REQUIRE( is_square_free(0) == false );
	REQUIRE( is_square_free(1) );
	REQUIRE( is_square_free(2) );
	REQUIRE( is_square_free(3) );
	REQUIRE( is_square_free(5) );
	REQUIRE( is_square_free(6) );
	REQUIRE( is_square_free(7) );
	REQUIRE( is_square_free(10) );
	REQUIRE( is_square_free(11) );
	REQUIRE( is_square_free(13) );
	REQUIRE( is_square_free(14) );
}

TEST_CASE("tetrahedral")
{
	REQUIRE( is_tetrahedral(0) == false );
	REQUIRE( is_tetrahedral(1) );
	REQUIRE( is_tetrahedral(4) );
	REQUIRE( is_tetrahedral(10) );
	REQUIRE( is_tetrahedral(20) );
	REQUIRE( is_tetrahedral(35) );
	REQUIRE( is_tetrahedral(56) );
	REQUIRE( is_tetrahedral(84) );
	REQUIRE( is_tetrahedral(120) );
	REQUIRE( is_tetrahedral(165) );
	REQUIRE( is_tetrahedral(220) );
}

TEST_CASE("triangular")
{
	REQUIRE( is_triangular(0) == false );
	REQUIRE( is_triangular(1) );
	REQUIRE( is_triangular(3) );
	REQUIRE( is_triangular(6) );
	REQUIRE( is_triangular(10) );
	REQUIRE( is_triangular(15) );
	REQUIRE( is_triangular(21) );
	REQUIRE( is_triangular(28) );
	REQUIRE( is_triangular(36) );
	REQUIRE( is_triangular(45) );
	REQUIRE( is_triangular(55) );
}

TEST_CASE("twin")
{
	REQUIRE( is_twin(0) == false );
	REQUIRE( is_twin(3) );
	REQUIRE( is_twin(5) );
	REQUIRE( is_twin(7) );
	REQUIRE( is_twin(11) );
	REQUIRE( is_twin(13) );
	REQUIRE( is_twin(17) );
	REQUIRE( is_twin(19) );
	REQUIRE( is_twin(29) );
	REQUIRE( is_twin(31) );
	REQUIRE( is_twin(41) );
}

TEST_CASE("ulam")
{
	REQUIRE( is_ulam(0) == false );
	REQUIRE( is_ulam(1) );
	REQUIRE( is_ulam(2) );
	REQUIRE( is_ulam(3) );
	REQUIRE( is_ulam(4) );
	REQUIRE( is_ulam(6) );
	REQUIRE( is_ulam(8) );
	REQUIRE( is_ulam(11) );
	REQUIRE( is_ulam(13) );
	REQUIRE( is_ulam(16) );
	REQUIRE( is_ulam(18) );
}

TEST_CASE("undulating")
{
	REQUIRE( is_undulating(0) == false );
	REQUIRE( is_undulating(101) );
	REQUIRE( is_undulating(111) );
	REQUIRE( is_undulating(121) );
	REQUIRE( is_undulating(131) );
	REQUIRE( is_undulating(141) );
	REQUIRE( is_undulating(151) );
	REQUIRE( is_undulating(161) );
	REQUIRE( is_undulating(171) );
	REQUIRE( is_undulating(181) );
	REQUIRE( is_undulating(191) );
}

TEST_CASE("untouchable")
{
	REQUIRE( is_untouchable(0) == false );
	REQUIRE( is_untouchable(2) );
	REQUIRE( is_untouchable(5) );
	REQUIRE( is_untouchable(52) );
	REQUIRE( is_untouchable(88) );
	REQUIRE( is_untouchable(96) );
	REQUIRE( is_untouchable(120) );
	REQUIRE( is_untouchable(124) );
	REQUIRE( is_untouchable(146) );
	REQUIRE( is_untouchable(162) );
	REQUIRE( is_untouchable(188) );
}

TEST_CASE("vampire")
{
	REQUIRE( is_vampire(0) == false );
	REQUIRE( is_vampire(126) );
	REQUIRE( is_vampire(153) );
	REQUIRE( is_vampire(688) );
	REQUIRE( is_vampire(1206) );
	REQUIRE( is_vampire(1255) );
	REQUIRE( is_vampire(1260) );
	REQUIRE( is_vampire(1395) );
	REQUIRE( is_vampire(1435) );
	REQUIRE( is_vampire(1503) );
	REQUIRE( is_vampire(1530) );
}

TEST_CASE("weird")
{
	REQUIRE( is_weird(0) == false );
	REQUIRE( is_weird(70) );
	REQUIRE( is_weird(836) );
	REQUIRE( is_weird(4030) );
	REQUIRE( is_weird(5830) );
	REQUIRE( is_weird(7192) );
	REQUIRE( is_weird(7912) );
	REQUIRE( is_weird(9272) );
	REQUIRE( is_weird(10430) );
	REQUIRE( is_weird(10570) );
	REQUIRE( is_weird(10792) );
}
