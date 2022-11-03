// Declarations of my functions
#define  SIZE_OF_FACT_ARRAY 20

long int calculate_factorial_function( short factorial_argument);
long int calc_factorial_from_zero_to_limit(const short UPPERLIMIT,long int array_of_factorials[UPPERLIMIT]) ;
void show_interface(float *xstart, float *step, short *number_of_modifications, short *number_of_components);
int check_data_from_user(short *number_of_components, short *number_of_modifications, float *xstart, float *step);
float maclaurin_sinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] );
float maclaurin_cosinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] );
