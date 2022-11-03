#include <stdio.h>
#include <stdlib.h>
#include "my_library.h"
#include "my_library.c"


int main(void)
{
 short upperlimit = SIZE_OF_FACT_ARRAY;
 long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY];
 float xstart = 0,step =0;  
 short number_of_modifications = 0, number_of_components = 0;          
 float *xstart_ptr = &xstart, *step_ptr = &step;                       // declaration of local(main) variables  
 float displaying_xstart;
 short *number_of_components_ptr = &number_of_components;
 short *number_of_modifications_ptr = &number_of_modifications;
 //Calculating factorials and writing results into array
 calc_factorial_from_zero_to_limit(upperlimit,array_of_factorials_0_to_limit); // write factorial of  each number (from 0 to SIZE_OF_FACT_ARRAY) to correct index
 show_interface(xstart_ptr,step_ptr,number_of_modifications_ptr,number_of_components_ptr);// display interface and collect some data from user 
 int error = check_data_from_user(number_of_components_ptr,number_of_modifications_ptr,xstart_ptr,step_ptr);// assigning the number of errors to the error variable 
 displaying_xstart = xstart;  
 for(short i = 0; i<=number_of_modifications; i++ ) //show results for each iteration of starting point (x+step)
  { 
    if(error != 0)                                    
    {
      printf("\n Input data status = incorrect\n");
      printf("\n NOTE: INPUT DATA MUST BE NUMBERS!!!!! ");
      break;
    }
    if( i == 0 && error == 0)printf("\ninput data status = correct\n"); // check if data is correct
    if(xstart > 2*M_PI) xstart = fmod(xstart, 2*M_PI);                  //taking into account the periodicity of sinus and cosinus 
    printf("sin(%.2f) = %.3f " ,displaying_xstart, maclaurin_sinus(xstart,number_of_components,array_of_factorials_0_to_limit)); //display results (sinus)
    printf("\t\tcos(%.2f) = %.2f\n",displaying_xstart, maclaurin_cosinus(xstart,number_of_components,array_of_factorials_0_to_limit)); // display results (cosinus)
    xstart += step,displaying_xstart+=step;  
  }
return 0;
}
