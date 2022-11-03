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
* 1 v1
* 2 v2 
* 3 v3 
* 4 v4
### Functions used by the program
    Program uses functions included in the library my_library.c
    * f1
    * f2
    * f3
    * f4
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
