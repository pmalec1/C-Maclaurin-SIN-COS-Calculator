#include <stdio.h>
#include <stdlib.h>

#include "my_library.h"
#include "my_library.c"

int main(void)
{
 int upperlimit = SIZE_OF_FACT_ARRAY;
 long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY];
 int upperlimit = SIZE_OF_FACT_ARRAY;
 long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY];
 float xstart = 0,step =0;  
 int number_of_modifications = 0, number_of_components = 0; 
 float *xstart_ptr = &xstart, *step_ptr = &step;                       // declaration of local(main) variables  
 float displaying_xstart;
 int *number_of_components_ptr = &number_of_components,*number_of_modifications_ptr =&number_of_modifications;
 //Calculating factorials and writing results into array
 calc_factorial_from_zero_to_limit(upperlimit,array_of_factorials_0_to_limit); // write factorial of  each number (from 0 to SIZE_OF_FACT_ARRAY) to correct index
 return 0;
 }
