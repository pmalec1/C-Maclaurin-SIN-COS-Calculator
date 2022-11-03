# PIOTR MALEC 318544
> Oswiadczam ze praca zostala wykonana przeze mnie samodzielnie
### PROJECT STATUS 
> Complete 
## TASK 2
        calculating(approximation) values of functions 
        using Maclaurin series
 ### Chosen functions

        1.sin(x)
        2.cos(x)

### Variables in program:
	* 1 float xstart - starting value of x
	* 2 short int number_of_modification - number of steps
	* 3 short int number_of_components -number of Maclaurin's series' components
	* 4 float step - step of x in one iteration
	* 5 short int error - number of errors in input data
	* 6 long  int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] - array with factorials 
### Functions used by the program
##### Program uses functions included in the library my_library.c
	long int calculate_factorial_function( short factorial_argument); --calculate factorial for one argument


	long int calc_factorial_from_zero_to_limit(const short UPPERLIMIT,long int array_of_factorials[UPPERLIMIT]) ;
	--write values of factorials for each argument from 0 to limit in an array

	void show_interface(float *xstart, float *step, short *number_of_modifications, short *number_of_components);
	--show UI

	int check_data_from_user(short *number_of_components, short *number_of_modifications, float *xstart, float *step);


	float maclaurin_sinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] );
	--calculate(aproximation) value of sinus using Maclaurin's series

	float maclaurin_cosinus(float starting_point,short max_step,long int array_of_factorials_0_to_limit[SIZE_OF_FACT_ARRAY] );
	----calculate(aproximation) value of sinus using Maclaurin's series



### Examples of using 
> Exemplary input and output  values
```
EX.1
	CALCULATING SINUS AND COSINUS VALUES
		using Maclaurin series

 	Write starting value,  		 xstart=1.59

	     Step value,			delta_x=1.21

How many times do want you to make a step.
No.iterations of changing xstart		6

How many component of the Maclaurin series
	     do you want to use?			9

 number of errors = 0 

input data status = correct
sin(1.59) = 1.000 		cos(1.59) = -0.019
sin(2.80) = 0.335 		cos(2.80) = -0.942
sin(4.01) = -0.763 		cos(4.01) = -0.646
sin(5.22) = -0.874 		cos(5.22) = 0.486
sin(6.43) = 0.146 		cos(6.43) = 0.989
sin(7.64) = 0.977 		cos(7.64) = 0.212
sin(8.85) = 0.544 		cos(8.85) = -0.839

EX.2
	CALCULATING SINUS AND COSINUS VALUES
		using Maclaurin series

 	Write starting value,  		 xstart=0       

	Step value,			       delta_x=-1

How many times do want you to make a step.
No.iterations of changing xstart		5

How many component of the Maclaurin series
         	do you want to use?			9

 number of errors = 0 

input data status = correct
sin(0.00) = 0.000 		cos(0.00) = 1.000
sin(-1.00) = -0.841     cos(-1.00) = 0.540
sin(-2.00) = -0.909     cos(-2.00) = -0.416
sin(-3.00) = -0.141 	cos(-3.00) = -0.990
sin(-4.00) = 0.757 		cos(-4.00) = -0.654
sin(-5.00) = 0.959 		cos(-5.00) = 0.284

EX.3
	CALCULATING SINUS AND COSINUS VALUES
		using Maclaurin series

 	Write starting value,  		 xstart=0

	Step value,			      delta_x=0.1

How many times do want you to make a step.
No.iterations of changing xstart		5

How many component of the Maclaurin series
	     do you want to use?			9

 number of errors = 0 

input data status = correct
sin(0.00) = 0.000 		cos(0.00) = 1.000
sin(0.10) = 0.100 		cos(0.10) = 0.995
sin(0.20) = 0.199 		cos(0.20) = 0.980
sin(0.30) = 0.296 		cos(0.30) = 0.955
sin(0.40) = 0.389 		cos(0.40) = 0.921
sin(0.50) = 0.479 		cos(0.50) = 0.878



```
## RULES
* All input data should be numbers
* Number of  components(value variable named ""  ) must be between 0 and 9
* Number of interations(value variable named ""  ) must be positive greater or equal to 0 
* The program takes into account the periodicity of the sine  and cosine functions for better results (approximations)
it is caused by approximation of the function value with Maclaurin series.
