 /*  TRAME MATH
    Copyright (C) 2021  Paulo C. Ormonde

    <http://www.trameestruturas.com.br>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

------------------------------------------------------------------------------
 Third parts
  
 * TINYEXPR - Tiny recursive descent parser and evaluation engine in C
 *
 * Copyright (c) 2015-2018 Lewis Van Winkle
 *
 * http://CodePlea.com
 *
------------------------------------------------------------------------------
 How to compile:  gcc -Wall -o math math.c -lm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colorcodes.h"
#include "tinyexpr.h"
#include "tinyexpr.c"

//FUNCTIONS
void mathmenu (void);
void mathhelp (void); 

// GLOBAL VARIABLES
char c[100];


// MAIN PROGRAM
int main () {
	system("clear");
	mathmenu();
	
 while (strcmp(c,"q") != 0) {
   printf(BHYEL "\n\t > " HWHT );
    scanf(" %[^\n]%*c", c);
    	  if (strcmp(c,"clc") == 0) {
		       mathmenu();
			} 
		  if (strcmp(c,"h") == 0) {
		       mathhelp();
			} 
			if (strcmp(c,"q") != 0 && strcmp(c,"clc") != 0 && strcmp(c,"h") != 0){
			  double r = te_interp( c , 0);
			   res = r;
		       printf(HBLU "\t ans = %f", r);	
			}
     
   }
   printf("\n " reset);
   system("clear");
   exit(0);
   return 0;
}


void mathmenu (void) {
    system("clear");
	printf( HYEL  "\n\t=====================================");
	printf( BHWHT "\n\t     TRAME MATH EXPRESSION 21.02     "); 
	printf( HGRN  "\n\t  'clc' clear | 'h' help | 'q' exit  ");	
	printf( HYEL  "\n\t=====================================");
  }


void mathhelp (void) {
system("clear");
printf( HYEL  "\n\t=========================================");
printf( BHWHT "\n\t TRAME MATH EXPRESSION 21.02     ");
printf( BHWHT "\n\t Terminal interface for TINYEXPR ");
printf( BHWHT "\n\t By Paulo C. Ormonde     ");
printf( BHWHT "\n\t http://trameestruturas.com.br     ");
printf( HYEL  "\n\t-----------------------------------------");
printf( BHWHT "\n\t TINYEXPR     ");
printf( BHWHT "\n\t Tiny recursive descent parser and     ");
printf( BHWHT "\n\t evaluation engine in C.     ");
printf( BHWHT "\n\t Copyright (c) 2015-2018 Lewis Van Winkle     ");
printf( BHWHT "\n\t http://CodePlea.com     "); 
printf( HYEL  "\n\t-----------------------------------------");
printf( HGRN  "\n\t  'clc' clear | 'h' help | 'q' exit  ");
printf( HYEL  "\n\t=========================================");
}

	
