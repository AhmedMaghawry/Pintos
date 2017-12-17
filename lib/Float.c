#include "Float.h"

const int q = 14 ; /* fraction part of representation */
const int f = 1<<14 ; /* trasnformation */

/* intialize number to float representation */
Float Float_inti(int num){
	Float res ;
	res.n = num * f ;
	return res ;
}

/* convert to integer represenation */
int to_integer(Float f1){
	if(f1.n>=0)f1.n += f/2;
	else f1.n -= f/2;
	return f1.n/f ;
}

/* add two float numbers */
Float add(Float f1 , Float f2){
	Float res ;
	res.n = f1.n + f2.n ;
	return res ;
}

Float addInt(Float f1 , int64_t n2){
	Float res ;
	res.n = f1.n + n2 * f ;
	return res ;
}

/* subtract two float numbers */
Float subtract(Float f1 , Float f2){
	Float res ;
	res.n = f1.n - f2.n ;
	return res ;
}

/* multiply two flaot numbers */
Float mul(Float f1 , Float f2){
	Float res ;
	res.n = (f1.n * f2.n) / f ;
	return res ;
}

Float mulInt(Float f1 , int64_t n2){
	Float res ;
	res.n = f1.n * n2 ;
	return res ;
}

/* divide two flaot numbers */
Float divide(Float f1 , Float f2){
	Float res ;
	res.n = (f1.n * f) / f2.n ;
	return res ;
}

Float divideInt(Float f1 , int64_t n2) {
	Float res ;
	res.n = f1.n / n2;
	return res ;
}

void print(Float f1){
	printf("%d\n", f1.n);
}
