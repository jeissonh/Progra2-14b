#ifndef NGOSSIP_H
#define NGOSSIP_H

#include <stdbool.h>

typedef unsigned long long int longnum;

/**
	@see http://www.numbergossip.com/
*/

#ifdef __cplusplus
extern "C"
{
#endif

/**
	The number n is abundant if the sum of all its positive divisors except itself is more than n.
	They are abundant above perfection, not to mention deficiency. See perfect and deficient numbers.
	First ten: 12, 18, 20, 24, 30, 36, 40, 42, 48, 54
	There are 2487 abundant numbers below 10,000.
*/
bool is_abundant(longnum num);

/**
	The number n is amicable if it belongs to an amicable pair. Two numbers n and m are called an amicable pair if the sum of all positive divisors of n is equal to the sum of all positive divisors of m and both are equal to n + m.
	It all started with perfect numbers which are amicable with themselves. Those numbers adopted social virtues and qualities; for the parts of each of them have the power to generate the other. See also sociable numbers.
	First ten: 220, 284, 1184, 1210, 2620, 2924, 5020, 5564, 6232, 6368
	There are 10 amicable numbers below 10,000.
*/
bool is_amicable(longnum num);

/**
	The number n is called an apocalyptic power if 2^n contains the consecutive digits 666 (in decimal).
	First ten: 157, 192, 218, 220, 222, 224, 226, 243, 245, 247
	There are 6485 apocalyptic powers below 10,000.
*/
bool is_apocalyptic_power(longnum num);

/**
	The number n is called an aspiring number if its aliquot sequence terminates in a perfect number, and it is not a perfect number itself.
	First ten (known): 25, 95, 119, 143, 417, 445, 565, 608, 650, 652
	There are 89 known aspiring numbers below 10,000.
*/
bool is_aspiring(longnum num);

/**
	The number n is called an automorphic number if (the decimal expansion of) n^2 ends with n. These numbers are also called curious.
	It is curious, how for a k-digit automorphic number n there is another automorphic number -- 10^k + 1 - n. For this to work with n=1, you have to treat 1 as a zero-digit number.
	First ten: 1, 5, 6, 25, 76, 376, 625, 9376, 90625, 109376
	There are 8 automorphic numbers below 10,000.
*/
bool is_automorphic(longnum num);

/**
	The n-th cake number is the maximum number of pieces a (cylindrical) cake can be cut into with n (straight-plane) cuts.
	Unfortunately, not everybody gets the frosting. If you cut pizza rather than cake, you get lazy caterer's numbers.
	First ten: 2, 4, 8, 15, 26, 42, 64, 93, 130, 176
	There are 39 cake numbers below 10,000.
*/
bool is_cake(longnum num);

/**
	The composite integer n is a Carmichael number if b^(n-1) = 1 (mod n) for every integer b which is relatively prime with n.
	Carmichael numbers behave like prime numbers with respect to the most useful primality test, that is they pretend to be prime.
	First ten: 561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341
	There are 7 Carmichael numbers below 10,000.
*/
bool is_carmichael(longnum num);

/**
	The n-th Catalan number is equal to (2n choose n)/(n+1) = (2n)!/(n!(n+1)!).
	There are many ways Catalan numbers can be interpreted; there are some cool pictures here and the Wikipedia article is very good.
	First ten: 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796
	There are 9 Catalan numbers below 10,000.
*/
bool is_catalan(longnum num);

/**
	A positive integer greater than 1 that is not prime is called composite.
	Composite numbers are opposite to prime numbers.
	First ten: 4, 6, 8, 9, 10, 12, 14, 15, 16, 18
	There are 8769 composite numbers below 10,000.
*/
bool is_composite(longnum num);

/**
	The n-th compositorial is the product of the first n composite numbers.
	Compositorial numbers are factorials divided by primorials.
	First ten: 4, 24, 192, 1728, 17280, 207360, 2903040, 43545600, 696729600, 12541132800
	There are 4 compositorials below 10,000.
*/
bool is_compositorial(longnum num);

/**
	The number n is a cube if it is the cube of an integer.
	First ten: 1, 8, 27, 64, 125, 216, 343, 512, 729, 1000
	There are 21 cube numbers below 10,000.
*/
bool is_cube(longnum num);

/**
	The number n is deficient if the sum of all its positive divisors except itself is less than n.
	Compare with perfect and abundant numbers.
	First ten: 1, 2, 3, 4, 5, 7, 8, 9, 10, 11
	There are 7508 deficient numbers below 10,000.
*/
bool is_deficient(longnum num);

/**
	A number is even if it is divisible by 2.
	Numbers that are not even are odd. Compare with another pair -- evil and odious numbers.
	First ten: 2, 4, 6, 8, 10, 12, 14, 16, 18, 20
	There are 4999 even numbers below 10,000.
*/
bool is_even(longnum num);

/**
	The number n is evil if it has an even number of 1's in its binary expansion.
	Guess what odious numbers are.
	First ten: 3, 5, 6, 9, 10, 12, 15, 17, 18, 20
	There are 4999 evil numbers below 10,000.
*/
bool is_evil(longnum num);

/**
	The n-th factorial is the product of the first n natural numbers.
	The factorial deserved an exclamation mark for its notation: k! = 1*2*3*...*k.
	First ten: 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800
	There are 7 factorials below 10,000.
*/
bool is_factorial(longnum num);

/**
	Fibonacci numbers are numbers that form the Fibonacci sequence. The Fibonacci sequence is defined as starting with 1, 1 and then each next term is the sum of the two preceding ones.
	Fibonacci numbers are very common in nature. For example, a pineapple has 8 spirals if you count one way, and 13 if you count the other way.
	First ten: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
	There are 19 different Fibonacci numbers below 10,000.
*/
bool is_fibonacci(longnum num);

/**
	The n-th Google number is the first n-digit prime found in the decimal expansion of e.
	They are named Google numbers because of the unusual hiring ad that Google put up.
	First ten: 2, 71, 271, 4523, 74713, 904523, 2718281, 72407663, 360287471, 7427466391
	There are 4 Google numbers below 10,000.
*/
bool is_google(longnum num);

/**
	One can take the sum of the squares of the digits of a number. Those numbers are happy for which iterating this operation eventually leads to 1.
	First ten: 1, 7, 10, 13, 19, 23, 28, 31, 32, 44
	There are 1441 happy numbers below 10,000.
*/
bool is_happy(longnum num);

/**
	The k-th hungry number is the smallest number n such that 2^n contains the first k digits of the decimal expansion of pi.
	They are named hungry numbers because they try to eat as much "pi" as possible.
	First ten: 5, 17, 74, 144, 144, 2003, 2003, 37929, 82810, 161449
	There are 7 hungry numbers below 10,000.
*/
bool is_hungry(longnum num);

/**
	The n-th lazy caterer number is the maximum number of pieces a (circular) pizza can be cut into with n (straight-line) cuts.
	Unlike the situation with cake, everybody gets the toppings.
	First ten: 2, 4, 7, 11, 16, 22, 29, 37, 46, 56
	There are 140 lazy caterer numbers below 10,000.
*/
bool is_lazy_caterer(longnum num);

/**
	To build the lucky number sequence, start with natural numbers. Delete every second number, leaving 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, ... . The second number remaining is 3, so delete every third number, leaving 1, 3, 7, 9, 13, 15, 19, 21, ... . The next number remaining is 7, so delete every 7th number, leaving 1, 3, 7, 9, 13, 15, 21, ... . The next number remaining is 9, so delete every ninth number, etc.
	Those numbers were lucky they weren't crossed out.
	First ten: 1, 3, 7, 9, 13, 15, 21, 25, 31, 33
	There are 1118 lucky numbers below 10,000.
*/
bool is_lucky(longnum num);

/**
	A number of the form 2p - 1 is called a Mersenne number if p is prime.
	It was believed many years ago, that all Mersenne numbers are prime. This is not so, thus there is a separate entry for Mersenne prime numbers.
	First ten: 3, 7, 31, 127, 2047, 8191, 131071, 524287, 8388607, 536870911
	There are 6 Mersenne numbers below 10,000.
*/
bool is_mersenne(longnum num);

/**
	A Mersenne number which is also prime is called a Mersenne prime.
	The drive to find prime numbers among Mersenne numbers supplies humanity with the largest known prime numbers.
	First ten: 3, 7, 31, 127, 8191, 131071, 524287, 2147483647, 2305843009213693951, 618970019642690137449562111
	There are 5 Mersenne primes below 10,000.
*/
bool is_mersenne_prime(longnum num);

/**
	A k-digit number n is called narcissistic if it is equal to the sum of k-th powers of its digits. They are also called Plus Perfect numbers.
	First ten: 1, 2, 3, 4, 5, 6, 7, 8, 9, 153
	There are 16 narcissistic numbers below 10,000.
*/
bool is_narcissistic(longnum num);

/**
	A number is odd if it is not divisible by 2.
	Numbers that are not odd are even. Compare with another pair -- evil and odious numbers.
	First ten: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19
	There are 5000 odd numbers below 10,000.
*/
bool is_odd(longnum num);

/**
	The number n is odious if it has an odd number of 1's in its binary expansion.
	Guess what evil numbers are.
	First ten: 1, 2, 4, 7, 8, 11, 13, 14, 16, 19
	There are 5000 odious numbers below 10,000.
*/
bool is_odious(longnum num);

/**
	A palindrome is a number that reads the same forward or backward.
	First ten: 1, 2, 3, 4, 5, 6, 7, 8, 9, 11
	There are 198 palindromic numbers below 10,000.
*/
bool is_palindrome(longnum num);

/**
	A palindromic prime is a prime which is a palindrome.
	In base 2 Mersenne primes are palindromic primes.
	First ten: 2, 3, 5, 7, 11, 101, 131, 151, 181, 191
	There are 20 palindromic primes below 10,000.
*/
bool is_palindromic_prime(longnum num);

/**
	Pentagonal numbers are of the form n(3n - 1)/2.
	Pentagonal numbers are to pentagons what triangular numbers are to triangles and square numbers are to squares.
	First ten: 1, 5, 12, 22, 35, 51, 70, 92, 117, 145
	There are 81 pentagonal numbers below 10,000.
*/
bool is_pentagonal(longnum num);

/**
	The number n is perfect if the sum of all its positive divisors except itself is equal to n.
	Less than perfect numbers are called deficient, too perfect -- abundant.
	First ten: 6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128, 2658455991569831744654692615953842176, 191561942608236107294793378084303638130997321548169216
	There are 4 perfect numbers below 10,000.
*/
bool is_perfect(longnum num);

/**
	A number is a power of 2 if it is 2 to some power.
	First ten: 1, 2, 4, 8, 16, 32, 64, 128, 256, 512
	There are 14 powers of 2 below 10,000.
*/
bool is_power_of_2(longnum num);

/**
	An integer n is powerful if for every prime p dividing n, p^2 also divides n.
	How much power? They all can be written as a^2 b^3.
	First ten: 1, 4, 8, 9, 16, 25, 27, 32, 36, 49
	There are 184 powerful numbers below 10,000.
*/
bool is_powerful(longnum num);

/**
	The number n is practical if all numbers strictly less than n are sums of distinct divisors of n.
	First ten: 1, 2, 4, 6, 8, 12, 16, 18, 20, 24
	There are 1455 practical numbers below 10,000.
*/
bool is_practical(longnum num);

/**
	A prime is a positive integer greater than 1 that is divisible by no positive integers other than 1 and itself.
	Prime numbers are opposite to composite numbers.
	First ten: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29
	There are 1229 primes below 10,000.
*/
bool is_prime(longnum num);

/**
	The p-primorial is the product of all primes less than or equal to p. It is sometimes denoted by p#.
	Compare to compositorials and factorials.
	First ten: 2, 6, 30, 210, 2310, 30030, 510510, 9699690, 223092870, 6469693230
	There are 5 primorials below 10,000.
*/
bool is_primorial(longnum num);

/**
	The number is called pronic if it is the product of two consecutive numbers.
	They are twice triangular numbers.
	First ten: 2, 6, 12, 20, 30, 42, 56, 72, 90, 110
	There are 99 pronic numbers below 10,000.
*/
bool is_pronic(longnum num);

/**
	A repunit is an integer in which every digit is one.
	The term repunit comes from combining "repeated" and "unit".
	First ten: 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111
	There are 4 repunits below 10,000.
*/
bool is_repunit(longnum num);

/**
	A repunit is an integer in which every digit is the same.
	The term repunit comes from combining "repeated" and "digit".
	Examples: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666, 777, 888, 999, 1111
*/
bool is_repdigit(longnum num);

/**
	A composite number is called a Smith number if the sum of its digits equals the sum of all the digits appearing in its prime divisors (counting multiplicity).
	In 1984, when Albert Wilansky called his brother-in-law, named Smith, he noticed that the phone number possesses the property described here. Are they called joke numbers, because they were named after an innocent unsuspecting brother-in-law :-) ?
	First ten: 4, 22, 27, 58, 85, 94, 121, 166, 202, 265
	There are 376 Smith numbers below 10,000.
*/
bool is_smith(longnum num);

/**
	An aliquot sequence is formed by taking an integer, adding all of its divisors other than itself, and then repeating this process with the sum. The numbers for which this process returns to the starting point after more than two steps are called sociable numbers.
	The 2-cycles are the amicable pairs and the 1-cycles are the perfect numbers. For some numbers it is very difficult to compute the aliquot sequence. The smallest number whose sequence has not been completely computed is 276.
	First ten (known): 12496, 14264, 14288, 14316, 14536, 15472, 17716, 19116, 19916, 22744
	There are no known sociable numbers below 10,000.
*/
bool is_sociable(longnum num);

/**
	The number n is a square if it is the square of an integer.
	First ten: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100
	There are 99 squares below 10,000.
*/
bool is_square(longnum num);

/**
	A number is said to be square-free if its prime decomposition contains no repeated factors.
	First ten: 1, 2, 3, 5, 6, 7, 10, 11, 13, 14
	There are 6083 square-free numbers below 10,000.
*/
bool is_square_free(longnum num);

/**
	A tetrahedral number is the number of balls you can put in a triangular pyramid.
	This is the space generalization of triangular and square numbers.
	First ten: 1, 4, 10, 20, 35, 56, 84, 120, 165, 220
	There are 38 tetrahedral numbers below 10,000.
*/
bool is_tetrahedral(longnum num);

/**
	If you start with n points on a line, then draw n-1 points above and between, then n-2 above and between them, and so on, you will get a triangle of points. The number of points in this triangle is a triangle number.
	Compare to square, pentagonal and tetrahedral numbers.
	First ten: 1, 3, 6, 10, 15, 21, 28, 36, 45, 55
	There are 140 triangular numbers below 10,000.
*/
bool is_triangular(longnum num);

/**
	A prime number is called a twin prime if there exists another prime number differing from it by 2.
	First ten: 3, 5, 7, 11, 13, 17, 19, 29, 31, 41
	There are 409 twin primes below 10,000.
*/
bool is_twin(longnum num);

/**
	The next Ulam number is uniquely the sum of two earlier distinct Ulam numbers.
	First ten: 1, 2, 3, 4, 6, 8, 11, 13, 16, 18
	There are 827 Ulam numbers below 10,000.
*/
bool is_ulam(longnum num);

/**
	Undulating numbers are numbers of the form abababab... in base 10.
	This property is significant starting from 3-digit numbers, so we will not consider numbers below 100.
	First ten: 101, 111, 121, 131, 141, 151, 161, 171, 181, 191
	There are 180 undulating numbers below 10,000.
*/
bool is_undulating(longnum num);

/**
	The untouchable numbers are those that are not the sum of the proper divisors of any number.
	First ten: 2, 5, 52, 88, 96, 120, 124, 146, 162, 188
	There are 1212 untouchable numbers below 10,000.
*/
bool is_untouchable(longnum num);

/**
	The number n is called a vampire number if there exists a factorization of n using n's digits.
	First ten: 126, 153, 688, 1206, 1255, 1260, 1395, 1435, 1503, 1530
	There are 15 vampire numbers below 10,000.
*/
bool is_vampire(longnum num);

/**
	The number n is called a weird number if it is abundant but is not the sum of any subset of its proper factors.
	First ten: 70, 836, 4030, 5830, 7192, 7912, 9272, 10430, 10570, 10792
	There are 7 weird numbers below 10,000.
	Home Browse all Properties Links Contact Credits Editorial Policy
*/
bool is_weird(longnum num);

/**
	Pierre de Fermat once hypothesized that all numbers of the form F(n) = (2^(2^n)) + 1 were prime
	numbers. His conclusion was based on the results derived for n = 0, 1, 2, 3, and 4, which
	produced the primes of 3, 5, 17, 257 and 65,537. These numbers were called Fermat Numbers,
	F0, F1, F2, F3, and F4. However, Leonard Euler discovered in 1732 that
	F5 = (2^2)^5 + 1 = 4,294,967,297 = 6,700,416x641, a composite number.
	It was later shown that F8 through F20 were all composite. While never proved, it is widely
	accepted that all Fermat Numbers beyond F4 are composite.
*/
bool is_fermat(longnum num);

/**
	True if there exist two other integers a and b, such a^2 + b^2 == num
*/
bool is_hypotenuse(longnum num);

/**
	Multiply the digits of @a num, it produces a new num2. Repeat multiplying digits of num2, you
	get num3. Repeat until you get a number of one digit. Count the number of times the previous
	process was made. If this count is greater than digits of num, it is a persistent number.

	For example, take the number 764. 7x6x4 = 168; 1x6x8 = 48; 4x8 = 32; and finally, 3x2 = 6.
	The number of multiplication steps required to reach the single digit number
	from the given number is referred to as the "persistence" of the starting number.
	764 required 4 steps, therefore persistence(764) = 4. Because 4 > digits(764) = 3, 764 is
	a persistent number.

	@remarks This definition was modified from original by including the number of digits of num
*/
bool is_persistent_number(longnum num);

/**
	We call a number a product perfect number if the product of all its divisors, other than itself,
	is equal to the number. For example, 10 and 21 are product perfect numbers since 1*2*5 = 10
	and 1*3*7 = 21, whereas 25 is not, since the product of its divisors, 1*5 = 5 is too small

	Examples: 6,8,10,14,15,21,22,26,27,28,33,34,35,38,39,44,45,46,51,52,55,57,58
*/
bool is_product_perfect(longnum num);

/**
	A parasite number is one that retains the exact same digits when multiplied or divided by
	another number. For example 102,564 x 4 = 410,256 arrived at by merely moving the last 4 to the
	beginning of the remaining 5 digits. Similarly, 179,487 x 4 = 717,948. You might say that the
	digits are parasitic after being operated on.

	A cyclic number is a number of "n" digits that when multiplied by 1, 2, 3,...n, results in the
	same digits but in a different order. For example, the number 142,857 is a cyclic number since
	142,857 x 2 = 285,714, 142,857 x 3 = 428,571, 142,857 x 4 = 571,428, and so on. It is not known
	just how many cyclic numbers exist.
*/
bool is_parasite(longnum num);

/**
	True if n is divisible by the sum of its digits
*/
bool is_ecci1(longnum num);

/**
	True if the sum of digits of num equals the count of proper divisors of num
*/
bool is_ecci2(longnum num);

/**
	True if (1) each digit is consecutive of the previous one. E.g: 345678, 6543210.
	Or (2) digits repeat consecutively and the number of repetitions is less than or equal to
	sqrt(digits(num)). E.g: 333000444, 555559977, 4000, 4422
*/
bool is_easy_to_remember(longnum num);


#ifdef __cplusplus
}
#endif

#endif // NGOSSIP_H
