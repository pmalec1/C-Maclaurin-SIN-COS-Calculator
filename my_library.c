
#include <stdio.h>
#include <stdlib.h>
#include "my_library.h"
#include <math.h>

 long int calculate_factorial_function( short factorial_argument)
{
  long int temp_var = 1;
  for(unsigned short int i = 1; i <= factorial_argument; i++)
  { 
    temp_var = temp_var * i;
  }
return temp_var;
}
 long int calc_factorial_from_zero_to_limit( const  short int UPPERLIMIT, long int array_of_factorials[UPPERLIMIT]) 
{
 array_of_factorials[0]=1;
 
  long int result_of_calc;
   for(unsigned short int i = 1 ; i <= UPPERLIMIT ; i++) 
   {
    result_of_calc = calculate_factorial_function(i);
    array_of_factorials[i] = result_of_calc;
   } 
 return 0;

}
void show_interface(float *xstart, float *step, short *number_of_modifications, short *number_of_components)
{
    printf("\tCALCULATING SINUS AND COSINUS VALUES\n\t\tusing Maclaurin series\n\n ");
    printf("\tWrite starting value,  \t\t xstart=");
    scanf("%f",xstart);
    printf("\n\tStep value,\t\t\tdelta_x=");
    scanf("%f",step);
    printf("\nHow many times do want you to make a step.\nNo.iterations of changing xstart\t\t");
    scanf("%hd",number_of_modifications);
    printf("\nHow many component of the Maclaurin series\n\tdo you want to use?\t\t\t");
    scanf("%hd",number_of_components);
 }
 float maclaurin_sinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] ) // function used to approximate sin(x) using Maclaurin's series
{
    float result=0; 
    for(short current_step=0;current_step<max_step+1;current_step++) 
   { 
    result+= (((powf(-1,current_step))/(array_of_factorials_0_to_limit[(2*current_step)+1]))*(powf(starting_point,((2*current_step)+1))));
   }

     return result;
}
int check_data_from_user(short *number_of_components, short *number_of_modifications, float *xstart, float *step)
{
short error = 0;
if(*number_of_components<1 || *number_of_components>9)
{ printf("\nERROR number of components \n Please type number beetwen 0 and 9 \n");
  ++error;
}
if(*number_of_modifications<0)
{
  printf("error number od modifications\n Please type number bigger or equal to 0 ");
  ++error;
}
printf("\n number of errors = %d \n",error);
return error;
}  
float maclaurin_cosinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] ) // function used to approximate sin(x) using Maclaurin's series
{
    float result=0; 
    for(short current_step=0;current_step<max_step+1;current_step++) 
   { 
    result+= (((powf(-1,current_step))/(array_of_factorials_0_to_limit[(2*current_step)]))*(powf(starting_point,(2*current_step))));
   }
    
     return result;
}
