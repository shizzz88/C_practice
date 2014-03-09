/*
 * struct_test.c
 *
 *  Created on: Feb 25, 2014
 *      Author: mshahzad
 */
#include "struct_test.h"
#include <math.h>

void initstruct(s_main* p){
	p->numbers.x = 5;
	p->numbers.y = 3;
	p->numbers.z = 0;
	p->numbers.w = 0;
	p->add		= 0;
	p->sub		= 0;
	p->mult		= 0;
}

double multiply(s_main* p){
	p->mult = p->numbers.x * p->numbers.y;
	return p->mult;
}

int addition(s_main* p){
	p->numbers.z = p->numbers.x + p->numbers.y;
	return p->numbers.z;
}

int subtraction(s_main* p){
	p->numbers.w = p->numbers.x - p->numbers.y;
	return p->numbers.w;
}

