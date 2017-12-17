#ifndef __FLOAT_H
#define __FLOAT_H

#include <stdlib.h>
#include <stdio.h>


typedef struct{
	int64_t n ; /* value in normal representation */
} Float ;

Float Float_inti(int num) ; /* intialize number to float representation */

int to_integer(Float f); /* convert to integer represenation */

Float add(Float f1 , Float f2); /* add two float numbers */
Float addInt(Float f1 , int64_t n2); /* add two float numbers */

Float subtract(Float f1 , Float f2); /* subtract two float numbers */

Float mul(Float f1 , Float f2); /* multiply two flaot numbers */
Float mulInt(Float f1 , int64_t n2); /* multiply flaot number with an integer */

Float divide(Float f1 , Float f2); /* divide two flaot numbers */
Float divideInt(Float f1 , int64_t n2); /* divide flaot number and int */

void print(Float f1);

#endif
