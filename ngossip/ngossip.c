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
    for( longnum i = 0; i <= num; i++)
    {
        longnum cuadrado = i*i;
        if (num == cuadrado * i)
            return true;
    }
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
    if(num == 0)return false;
    int c = 1;
    longnum aux = num;
    while(num%c == 0)
    {
        aux/=c;
        if(aux==1)return true;
        ++c;
    }
    return false;
}

    longnum create_fibonacci_sequence(longnum n)
    {
        int fibonacci_0=1;
        int fibonacci_1=1;
        longnum temp;
        longnum i;

        if ((n==0)||(n==1))
            return 1;
            for (i=2; i<=n; ++i)
                    {
                        temp = fibonacci_0 + fibonacci_1;
                        fibonacci_0 = fibonacci_1;
                        fibonacci_1 = temp;
                    }
        return temp;
    }

bool is_fibonacci(longnum num)
{
        longnum value=0;
        longnum i=0;
        while (value<=num)
        {
            value = create_fibonacci_sequence(i);
            if (value == num)
                return true;
            i=i+1;
        }
        return false;
}

bool is_google(longnum num)
{
    return false;
}

bool is_happy(longnum num)
{
    if ( num == 0 ) {return false;}
	if ( num == 1 ) {return true;}
	
	longnum digitos=0;
	longnum suma=0;
	longnum cont=0;

	
	while(suma != 1){
		suma=0;
		digitos=0;
	
		while(num != 0){
			digitos = num % 10;
			suma =	suma	+ pow( digitos, 2);
			num = num / 10;
			if ( suma == 1 ){
				return true;
			}
		}
		num=suma;
		cont++;
		if(cont>=20) {return false;}
	}
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
    longnum tempNum,temp,nuevoNum,i;
    tempNum = num;
    temp = 0;
    nuevoNum = 0;
    for(i = 0;tempNum > 0;i++)
    {
        temp = tempNum % 10;
        nuevoNum = (nuevoNum * 10) + temp;
        tempNum = tempNum / 10;
    }
    if(num == nuevoNum)
        return true;
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
	if ( num == 0 ) return false;
	if ( num == 1 ) return true; // Because 2^0 = 1
	if ( num % 2 != 0 ) return false;
	while( num != 1 ) {
		if( num % 2 == 0 ) {
			num = num / 2;
		}
		else return false;
	}
	return true;
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
    bool soy_repdigit = false;
    if(num == 0)
    {
        return soy_repdigit;
    }
    longnum cociente = num / 10;
    longnum residuo = num % 10;
    longnum primer_numero = residuo;
    while(residuo == primer_numero && cociente != 0)
    {
        residuo = cociente % 10;
        cociente = cociente / 10;
    }

    if(residuo != primer_numero)
    {
        return soy_repdigit;
    }
    if(cociente == 0)
    {
        soy_repdigit = true;
    }

    return soy_repdigit;
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
    longnum nuevoNum,temp,i;
    temp = 0;
    nuevoNum = num * 2;
    for(i = 1; i < num; i++)
    {
        temp = i * (i + 1);
        if(temp == nuevoNum)
            return true;
    }
    return false;
}

bool is_twin(longnum num)
{
	if ( num == 0 ) return false;
	if ( is_prime(num) == false ) return false;
	if ( is_prime(num + 2 ) ) return true;
	if ( is_prime(num - 2 ) ) return true;
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
    if (num<=1){
    return false;
    }
    for(longnum catheti_One=1;catheti_One<num;catheti_One++){
        longnum catheti_Pow_One= pow(catheti_Pow_One,2.0);

        for(longnum catheti_Two=1;catheti_Two<num;catheti_Two++){
            longnum catheti_Pow_Two=pow(catheti_Pow_Two,2.0);

            if (num==(catheti_Pow_One+catheti_Pow_Two)/num){
                return true;
            }
        }
    }
    return false;
}

bool is_persistent(longnum num)
{
	// All positive integers lower than 39 do not have a greater persistence than their digits.
	if( num < 39 ) return false;
	if( num % 10 == 0) return false;
	longnum persistence = 0;
	// This is used for comparing the original number with its persistence.
	longnum original_num = num;
	while( num / 10 != 0 ) {
		longnum multiplication = 1;
		while( num != 0 ) {
			multiplication = multiplication * (num % 10);
			num = num / 10;
		}
		persistence++;
		if( persistence > count_digits( original_num ) ) return true;
		num = multiplication;
	}

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
	longnum num2 = num;
	longnum contador1 = 0;
	longnum contador2 = 0;
	longnum cuenta1 = 0;
	longnum cuenta2 = 0;
	longnum t=0;
	while (num2 != 0){  //Prueba si los dígitos son consecutivos
		contador1 = (num2%10);
		num2 = (num2/10);
		if (num2 >0 && (num2%10) == contador1-1)
			cuenta1++;
		if (num2 >0 && (num2%10) == contador1+1)
			cuenta2++;
		t++;
	}
	if (cuenta1 == (t-1) || cuenta2 == (t-1))
		return true;
	contador1 = 0;
	cuenta1 =0;
	cuenta2=-1;
	num2 =  num;
	while ( num2 != 0){  //Prueba hay series de numeros repetidos consecutivamente
		cuenta1 = (num2%10);
		num2 = (num2/10);
		if (num2 != 0 && (num2%10) != cuenta1){
			longnum temp1 = (num2%10);
			longnum temp2 = (num2/10);
			if ((temp2/10) != 0 && (temp2%10) != temp1)
				return false;
		}
		if (cuenta1 != cuenta2){
			cuenta2 = cuenta1;
			contador2++;
		}
		contador1++;
	}
	if (sqrt(t) >= contador2)
		return true;
    return false;
}

bool is_ecci1(longnum num)
{
    return false;
}

bool is_ecci2(longnum num)
{   //Returns false in case of num== 0 || 1

    if (num<=1){
        return false;
    }

    //Counts number of proper divisors
    longnum count=0;

    for(longnum i=1;i<num;i++)
    {
        if(num%i==0)
        {
        count++;
        }
    }

    //Sum of digits
    longnum total=0;

    while(num/10 != 0){
        total+=num%10;
        num=num/10;

    }
    if(num/10==0){
        total+=num%10;
    }
    //Compares the two results
    if(total==count){
        return true;
    }else{
    return false;
   }


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
