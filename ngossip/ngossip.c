#include "ngossip.h"
#include <math.h>



#ifdef __cplusplus
extern "C"
{
#endif


/*bool is_abundant(longnum num)
{
    return false;*/

bool is_abundant(longnum num){
int max=num/2;
int cont=0;
int entero=0;
int i;
for(i=2;i<=max; i++){
if(num%i==0){
 entero=num/i;
cont=cont+entero;
}
if (cont>num){
return true;

}
}
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
    if(num==0){return false;}

	if(num==0){return false;}

longnum num_elevated=pow(num,2);
if(num_elevated<100){
if(num_elevated%10==num){
return true;
}
}
if(num_elevated<1000){
if(num_elevated%100==num)
return true;

}

if (num_elevated<10000){
if(num_elevated%1000){
return true;
}
}
if (num_elevated<100000){
if(num_elevated%10000){
return true;
}
}
if (num_elevated<1000000){
if(num_elevated%100000){
return true;
}
}
if (num_elevated<10000000){
if(num_elevated%1000000){
return true;
}
}
if (num_elevated<100000000){
if(num_elevated%10000000){
return true;
}
}
if (num_elevated<1000000000){
if(num_elevated%100000000){
return true;
}
}
if (num_elevated<10000000000){
if(num_elevated%1000000000){
return true;
}
}
if (num_elevated<100000000000){
if(num_elevated%10000000000){
return true;
}
}
if (num_elevated<1000000000000){
if(num_elevated%10000000000){
return true;
}
}
if (num_elevated<10000000000000){
if(num_elevated%100000000000){
return true;
}
}
 return false;
}

longnum get_cake(double num)
{
    double cake = ((pow(num, 3)) + (5 * num) + 6) / 6;
    return (longnum)cake;
}

bool is_cake(longnum num)
{
    bool soy_cake = false;
        double raiz_cubica = pow(num, (1.0/3.0));
        longnum raiz = (longnum)raiz_cubica;
        if(num == get_cake(raiz))
        {
            soy_cake = true;
        }
        else
        {
            longnum mayor = (raiz * 2) + 1;
            longnum menor = raiz;
            longnum medio = ((mayor - menor) / 2) + menor;
            longnum posible_cake = get_cake(medio);

            while (num != posible_cake && medio < mayor)
            {

                if(posible_cake > num)
                {
                    mayor = medio;
                }
                else
                {
                    menor = medio;
                }

                medio = ((mayor - menor) / 2) + menor;

                if(medio == menor)
                {
                medio = medio + 1;
                }

                posible_cake = get_cake(medio);
            }

            if(num == posible_cake)
            {

                soy_cake = true;
            }
        }

        return soy_cake;
}

bool is_carmichael(longnum num)
{
    return false;
}


/*bool is_catalan(longnum num)
{
    return false;*/

bool is_catalan(longnum num){

	longnum i, j, k, n, producto, pre_numerador, denominador, pre_denominador1, pre_denominador2, numerador, denominador1, denominador2;

	if (num == 0) {return false;}

	n = 1;

	while (n <= num){

	pre_numerador = (2 * n);
	pre_denominador1 = (n + 1);
	pre_denominador2 = n;
	numerador = 1;
	denominador1 = 1;
	denominador2 = 1;

	for (i = 1; i <= pre_numerador; i++){
		numerador *= i;
	}

	for (j = 1; j <= pre_denominador1; j++){
		denominador1 *= j;
	}

	for (k = 1; k <= pre_denominador2; k++){
		denominador2 *= k;
	}

	denominador = denominador1 * denominador2;
	if (denominador != 0) {producto = numerador / denominador;}

	if (producto == num) {
		return true;
	}
	else {
		n++;
	}

	}

	return false;


}

bool is_composite(longnum num)
{


    if ( num <= 3 ) return false;
    if ( num % 2 == 0 ) return true;
    longnum square_root = sqrt(num);
    for (longnum i = 3; i <= square_root; i += 2 )
        if ( num % i == 0 )
            return true;

    return false;
}

/*bool is_compositorial(longnum num)
{
    return false;

    longnum i;

	longnum i;

	if ( num <= 3 ) return false;
	if ( num % 2 == 0 ) return true;
	longnum square_root = sqrt(num);
	for (i = 3; i <= square_root; i += 2 )
		if ( num % i == 0 )
			return true;

	return false;
}*/

bool is_compositorial(longnum num){

	longnum n, producto;

	if (num == 0) {return false;}

	producto = 1;
	n = 4;

	while (producto < num) {

		if (is_composite(n) == true) {
			producto *= n;
		}

		n++;

	}

	if (producto == num) {
		return true;
	}
	else{
		return false;
	}


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
    return num % 2 == 0;
}

bool is_evil(longnum num)
{

    return false;

	longnum n_unos = 0;
	while (num > 0)
	{
		if (num % 2 == 1)
			n_unos++;
		num = num/2;
	}
	if (n_unos % 2 == 0 && n_unos > 0)
		return true;
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
    return num % 2 == 1;
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

	if ( num == 2)
		return true;
	for (longnum i = 1; i<= (num/2); i++){
		if (i*(i+1)==num)
			return true;
	}
	return false;

}

bool is_repunit(longnum num)
{
    return false;
}

bool is_repdigit(longnum num)
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

bool is_fermat(longnum num)
{

    return false;

	longnum i = 0;
	longnum current_fermat = 0;
	while (num >= current_fermat)
	{
		current_fermat = pow(2,pow(2,i))+1;
		if (num == current_fermat)
			return true;
		i++;
	}
	return false;

}

bool is_hypotenuse(longnum num)
{
    return false;
}

bool is_persistent(longnum num)
{
    return false;
}

bool is_product_perfect(longnum num)
{
    return false;
}

bool is_parasite(longnum num)
{
    return false;
}

bool is_easy_to_remember(longnum num)
{
    return false;
}

bool is_ecci1(longnum num)
{
    return false;
}

bool is_ecci2(longnum num)
{
    return false;
}






int count_digits(longnum num)
{
	// Zero has 1 digit also
	int count = 1;

	// Each time the original number can be divided by 10, a digit is found
	for ( num /= 10; num != 0; num /= 10 )
		++count;

	return count;
}





#ifdef __cplusplus
}
#endif
