#include "my_library.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long int calculate_factorial_function( int factorial_argument)
{
  long int temp_var = 1;
  for(long int i = 1; i <= factorial_argument; i++)
  { 
    temp_var = temp_var * i;
  }
return temp_var;
}

long int calc_factorial_from_zero_to_limit(int upperlimit,long int array_of_factorials[upperlimit]) 
{
 array_of_factorials[0]=1;
 
 long int result_of_calc;
   for(int i = 1 ; i <= upperlimit ; i++) 
   {
    result_of_calc = calculate_factorial_function(i);
    array_of_factorials[i] = result_of_calc;
   } 
 return 0;

}
