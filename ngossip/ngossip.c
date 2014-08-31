#include "ngossip.h"
#include <math.h>



#ifdef __cplusplus
extern "C"
{
#endif


bool is_abundant(longnum num)
{
	 int max=num/2;
	 int cont=0;
	 int entero=0;
	 int i;
	 for(i=2;i<=max; i++)
	 {
		if (num % i == 0)
		{
		   entero = num / i;
		   cont = cont + entero;
		}
		if (cont > num)
		{
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
     int i;
     longnum num_elevated = num * num;
     int potencia = 1;

     if (num == 0) {return false;}

     if (num == 1) {return true;}

     for (i = 1; i < 10; i++)
     {
         potencia= potencia * 10;
         if (num_elevated % potencia == num)
         {
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
    if(num==2)
    {
        return true;
    }

    longnum suma_total = 0;

    if(num%2 == 0)  //numero par
    {
        for(int i = 3;  i <= num / 2; i++)
        {
            if(num%i  == 0)
            {
                suma_total= suma_total + i;
            }
        }
        suma_total = suma_total + 3;

    }
    else  //es impar
    {
        for(int i = 1; i <= (num - 1) / 2; i++)
        {
            if(num%i  == 0)
            {
                suma_total = suma_total + i;
            }
        }

    }
    if(suma_total<num)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    int fibonacci_0 = 1;
    int fibonacci_1 = 1;
    longnum temp;
    longnum i;

    if ((n == 0)||(n == 1))
        return 1;
        for (i = 2; i <= n; i++)
                {
                    temp = fibonacci_0 + fibonacci_1;
                    fibonacci_0 = fibonacci_1;
                    fibonacci_1 = temp;
                }
    return temp;
}

bool is_fibonacci(longnum num)
{
        longnum value = 0;
        longnum i = 0;
        while (value <= num)
        {
            value = create_fibonacci_sequence(i);
            if (value == num)
                return true;
            i++;
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

	longnum digito=0;
	longnum suma=0;
	longnum cont=0;


	while(suma != 1){
		suma=0;
		digito=0;

		while(num != 0){
			digito = num % 10;
			suma += digito * digito;
			num /= 10;
		}

		if ( suma == 1 ){
			return true;
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
        if(num == 1)
        {
            return false;
        }
        longnum discriminante = 0;
        int solucion_ecuacion = 0;
        longnum c = 2 * (num - 1);
        discriminante = 1 - (4 * -c);
        solucion_ecuacion = ( -1 + sqrt(discriminante) ) / 2;

        if(solucion_ecuacion % 1 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }


bool is_lucky(longnum num)
{
    return false;
}

bool is_mersenne(longnum num)
{
    longnum auxiliar = (log(++num)/log(2));
    if(auxiliar % 1 != 0)return false;
    return is_prime(auxiliar);
}

bool is_mersenne_prime(longnum num)
{
    if(!is_prime(num))return false;
    return is_mersenne(num);
}

bool is_narcissistic(longnum num)
{
if(num == 0) return false;
    int cou = 1;
    longnum num2 = num;
    longnum numf = num;

    for (num2 /= 10; num2 !=0; num2 /= 10) {
      ++cou;
  }

    longnum div=num;
    longnum result=0;
    longnum k=1;

    for (int i=0;i<cou;i++){
       num=div%10;
       div/=10;
    for (int l=0;l<cou;l++){
       k = k*num;
  }
    result=result+k;
    k = 1;
}

    if(result==numf)
         return  true;

 return false;
}

bool is_odd(longnum num)
{
    return num % 2 == 1;
}

bool is_odious(longnum num)
{
	int count = 0;

	if(num==1)
	{
		return true;
	}

	while(num>=1)
	{
		if(num %2 ==1)
		{
			count++;
		}
		num=num/2;
	}

	if(count %2!=0)
	{
		return true;
	}
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
	longnum sum = 0;
	if( num >= 1 ) {
		for(longnum i = 1; i <= (num/2); i++) {
			if(num % i == 0){
				sum += i;
			}
		}
		if ( sum == num ) {
			return true;
		}
	}
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
	longnum product = 1;
	for(longnum i = 2; product < num; ++i ) {
		if (is_prime(i)) {
			product *= i;
		}
	}
	if( (num == product) && (num != 1) ) {
		return true;
	}
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
/* // Este codigo no compila:
   longnum temp;
    if (sqrt(num)%1=0){};
*/
    return false;
}

bool is_square_free(longnum num)
{
	return false;
}

bool is_tetrahedral(longnum num)
{


	if(num==1)


	if( num == 1 )

	{
		return true ;
	}


	longnum level=1;
	longnum suma=1;
	longnum total=0;

	while(total < num)


	level = 1;
	suma = 1;
	total = 0;

	while( total < num )

	{
   		total += suma;
   		level++;
   		suma += level;
	}

		return total==num;


		if( total == num )
		{
			return true;
		}else
		{
			return false;
		}


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
    if (num  <= 100)
    {
        return false;
    }

    longnum primer_digito = num % 10;
    num /= 10;
    longnum segundo_digito = num % 10;
    //num /= 10;
    int contador = 0;
    do
    {
        num /= 10;
        if(contador % 2 == 0 && num % 10 != primer_digito)
        {
            return false;
        }
        if(contador % 2 != 0 && num % 10 != segundo_digito)
        {
            return false;
        }
        ++contador;
    }while(num / 10 != 0);
    return true;

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
	if (num < 5)
	{
		return false;
	}

	//Pitagorical prime
	longnum i=1;
	longnum pitagorical=0;

	while( pitagorical < num)
	{
	  if(num == (4*i+1))
	  {
		 pitagorical = (4*i+1);
	  }
	  ++i;
	}

	//Prime validation

	if ( pitagorical % 2 == 0 ) return false;

	longnum square_root = (pitagorical * pitagorical);
	longnum n;

	for ( n = 3; n <= square_root; n += 2 )
	{
		if ( pitagorical % n == 0 )
			{
				return true;
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
 longnum result = 1;
	if (num == 1) return false;
	if (num == 0) return false;

	for ( longnum div = 1; div<num; div++) {
	  if(num % div == 0)
	     result = result*div;
	     }

	   if (result == num)
	     return true;

    return false;
}

/*

Estas funciones eran para la función is_parasite(longnum num) que había hecho inicialmente según la definión de parasite number
encontrada en Internet.

int calc_lenght(longnum num)
{
    int lenght = 1;
    longnum temp = num;
    while(temp >= 10)
    {
        temp = (temp-temp%10)/10;
        lenght++;
    }
    return lenght;
}

int separate_last_digit(longnum num)
{
   return num%10;
}

longnum num_minus_last_digit(longnum num)
{
    longnum n = (num/10);
    return n;
}





   longnum calc_parasite(longnum num)
    {
        longnum temp = num;
        longnum num_lenght = calc_lenght(temp);
        int last_num = separate_last_digit(temp);
        longnum body = num_minus_last_digit(temp);
        temp = body+last_num*powl(10,num_lenght);
        return temp;
    }

    bool is_parasite(longnum num)
    {
        longnum temp = num;
        longnum reference_number = calc_parasite(num);
        longnum i = 1;
        while (i < 10 && temp != reference_number)
        {
            temp = num*i;
            i++;
        }
        if (i<9)
            return true;
        if (temp==reference_number)
            return true;
        return false;
    }*/

int calc_lenght(longnum num)
{
    int lenght = 1;
    longnum temp = num;
    while(temp >= 10)
    {
        temp = (temp - temp % 10) / 10;
        lenght++;
    }
    return lenght;
}

bool is_parasite(longnum num)
{
    bool is_parasite(longnum num)
{
    longnum temp = num;
    int lenght = calc_lenght(num);
    int times = 1;                              //dice si un dígito se repite en la cifra ingrasada
    int right = temp%10;                        //guarda el último dígito de derecha a izquierda
    int left = (temp/10)%10;                    //guarda el penúltimo dígito de derecha a izquierda
    int i = 1;

    while (i <= lenght && times <= 1)           //busca dígitos consecutivos iguales
    {
        if (right == left)
            times++;
        i++;
        temp = temp/10;
        right = temp%10;
        left = (temp/10)%10;
    }

    if (times<2)                                //si no hay dígitos consecutivos iguales averigua si son decrecientes o crecientes
    {
         if (num != 1 && num < 10)
         return false;
         if (lenght > 10)
             return false;

         i = 1;
         temp = num ;                                      //Decreciente
         right = temp%10;
         left = (temp/10)%10;
         while ((i < lenght) && (right == (left-1)))
         {
             i++;
             temp = temp/10;
             right = temp%10;
             left = (temp/10)%10;
         }
         if (i == lenght)
             return true;

         i = 1;                                         //Creciente
         temp = num;
         right = temp%10;
         left = (temp/10)%10;
         while ((i < lenght) && (right == (left+1)))
         {
            i++;
            temp = temp/10;
            right = temp%10;
            left = (temp/10)%10;
         }
         if (i == lenght)
            return true;
    }/*else                           //se ejecuta cuando hay dígitos consecutivos iguales, no terminé porqque no entendí la definición.
    {
        int exp = 1;
        int base = 1;
        temp = num;
        times = 1;
        i=1;
        right = temp%10;
        left = (temp/10)%10;
        while (i <= lenght)
        {
            if (right!=left)
            {
                temp = temp/10;
                right = temp%10;
                left = (temp/10)%10;
                i++;
            }else
            {
                base = right;

                while(i<=lenght&&right==left)
                {
                    temp = temp/10;
                    right = temp%10;
                    left = (temp/10)%10;
                    i++;
                    exp++;
                }


            }
        }
    }*/

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
	while (num2 != 0){  //Prueba si los digitos son consecutivos
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
{
    //Returns false in case of num== 0 || 1
    if (num <= 1)
    {
        return false;
    }

    //Counts number of proper divisors
    longnum count=0;

    longnum i;

    for( i = 1 ; i < num; ++i)
    {
        if(num % i == 0)
        {
        count++;
        }
    }

    //Sum of digits
    longnum total = 0;

    while(num/10 != 0)
    {
        total += num % 10;
        num/=10;
    }
    if(num / 10 == 0)
    {
        total += num % 10;
    }

    //Compares the two results
    if(total == count)
    {
        return true;
    }else
    {
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
